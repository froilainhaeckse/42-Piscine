/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 12:25:08 by tkupler           #+#    #+#             */
/*   Updated: 2024/02/06 16:49:27 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	num_to_char(int digit)
{
	char	digit_char;

	digit_char = digit + '0';
	return (digit_char);
}

int	first_digit(int num)
{
	int		digit;

	digit = num / 10;
	return (digit);
}

int	second_digit(int num)
{
	int		digit;

	digit = num % 10;
	return (digit);
}

void	write_output(int fst_num, int snd_num)
{
	char	digits[4];

	digits[0] = num_to_char(first_digit(fst_num));
	digits[1] = num_to_char(second_digit(fst_num));
	digits[2] = num_to_char(first_digit(snd_num));
	digits[3] = num_to_char(second_digit(snd_num));
	write(1, &digits[0], 1);
	write(1, &digits[1], 1);
	write(1, " ", 1);
	write(1, &digits[2], 1);
	write(1, &digits[3], 1);
	if (!(digits[0] == '9' && digits[1] == '8' && digits[3] == '9'))
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int		fst_num;
	int		snd_num;

	fst_num = 0;
	snd_num = 1;
	while (fst_num <= 98)
	{
		while (snd_num <= 99)
		{
			write_output(fst_num, snd_num);
			snd_num++;
		}
		fst_num++;
		snd_num = fst_num + 1;
	}
}
