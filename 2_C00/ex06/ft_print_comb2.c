/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 12:25:08 by tkupler           #+#    #+#             */
/*   Updated: 2024/02/06 15:33:07 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	write_output(char fst_dig, char snd_dig, char trd_dig, char fth_dig)
{
	write(1, &fst_dig, 1);
	write(1, &snd_dig, 1);
	write(1, " ", 1);
	write(1, &trd_dig, 1);
	write(1, &fth_dig, 1);
	if (!(fst_dig == '9' && snd_dig == '8' && fth_dig == '9'))
		write(1, ", ", 2);
}

void	generate_output(int fst_num, int snd_num)
{
	while (fst_num <= 98)
	{
		while (snd_num <= 99)
		{
			if (fst_num < 10 && snd_num < 10)
			{
				char fst_num_char = fst_num + '0';
				char snd_num_char = snd_num + '0';
				write_output('0', fst_num_char, '0', snd_num_char);
			}
			else
			{
				if (fst_num < 10)
				{
					char fst_num_char = fst_num + '0';
					int snd_num_fst_dig = snd_num/10;
					int snd_num_snd_dig = snd_num%10;
					char snd_num_fst_dig_char = snd_num_fst_dig + '0';
					char snd_num_snd_dig_char = snd_num_snd_dig + '0';
					write_output('0', fst_num_char, snd_num_fst_dig_char, snd_num_snd_dig_char);
				}
				else if (snd_num < 10)
				{
					char snd_num_char = snd_num + '0';
					int fst_num_fst_dig = fst_num/10;
					int fst_num_snd_dig = fst_num%10;
					char fst_num_fst_dig_char = fst_num_fst_dig + '0';
					char fst_num_snd_dig_char = fst_num_snd_dig + '0';
					write_output(fst_num_fst_dig_char, fst_num_snd_dig_char, '0', snd_num_char);
				}
				else
				{
					int fst_num_fst_dig = fst_num/10;
					int fst_num_snd_dig = fst_num%10;
					char fst_num_fst_dig_char = fst_num_fst_dig + '0';
					char fst_num_snd_dig_char = fst_num_snd_dig + '0';
					int snd_num_fst_dig = snd_num/10;
					int snd_num_snd_dig = snd_num%10;
					char snd_num_fst_dig_char = snd_num_fst_dig + '0';
					char snd_num_snd_dig_char = snd_num_snd_dig + '0';
					write_output(fst_num_fst_dig_char, fst_num_snd_dig_char, snd_num_fst_dig_char, snd_num_snd_dig_char);
				}
			}
			snd_num++;
		}
		snd_num = fst_num;
		fst_num++;
	}
}

void	ft_print_comb2(void)
{
	generate_output(0, 1);
}
