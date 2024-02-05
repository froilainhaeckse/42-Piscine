/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 12:25:08 by tkupler           #+#    #+#             */
/*   Updated: 2024/02/05 13:49:19 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_output(char fst_dig, char snd_dig, char trd_dig, char fth_dig)
{
	write(1, &fst_dig, 1);
	write(1, &snd_dig, 1);
	write(1, " ", 1);
	write(1, &trd_dig, 1);
	write(1, &fth_dig, 1);
	if (!(fst_dig == '9' && snd_dig == '8'))
		write(1, ", ", 2);
	else
		write(1, "\n", 1);
}

void	generate_output(char fst_dig, char snd_dig, char trd_dig, char fth_dig)
{
	while (fst_dig <= '9')
	{
		while (snd_dig <= '9')
		{
			while (trd_dig <= '9')
			{
				while (fth_dig <= '9')
				{
					write_output(fst_dig, snd_dig, trd_dig, fth_dig);
					fth_dig++;
				}
				fth_dig = '0';
				trd_dig++;
			}
			snd_dig++;
			trd_dig = fst_dig;
			fth_dig = snd_dig + 1;
		}
		snd_dig = '0';
		fst_dig++;
	}
}

void	ft_print_comb2(void)
{
	char	fst_digit;
	char	snd_digit;
	char	trd_digit;
	char	fth_digit;

	fst_digit = '0';
	snd_digit = '0';
	trd_digit = '0';
	fth_digit = '1';
	generate_output(fst_digit, snd_digit, trd_digit, fth_digit);
}
