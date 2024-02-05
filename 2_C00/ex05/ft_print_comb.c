/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 14:08:24 by tkupler           #+#    #+#             */
/*   Updated: 2024/02/05 10:47:37 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	write_output(char num1, char num2, char num3)
{
	write(1, &num1, 1);
	write(1, &num2, 1);
	write(1, &num3, 1);
	if (!(num1 == '7' && num2 == '8'))
		write(1, ", ", 2);
	else
		write(1, "\n", 1);
}

void	ft_print_comb(void)
{
	char	first_number;
	char	second_number;
	char	third_number;

	first_number = '0';
	while (first_number <= '7')
	{
		second_number = first_number + 1;
		while (second_number <= '8')
		{
			third_number = second_number + 1;
			while (third_number <= '9')
			{
				write_output(first_number, second_number, third_number);
				third_number++;
			}
			second_number++;
		}
		first_number++;
	}
}
