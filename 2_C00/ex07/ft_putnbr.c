/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 13:51:12 by tkupler           #+#    #+#             */
/*   Updated: 2024/02/07 13:12:53 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

char	num_to_char(int digit)
{
	char	digit_char;

	digit_char = digit + '0';
	return (digit_char);
}

void	ft_putnbr(int nb)
{
	char	num_char;
	int		new_number;
	int		last_digit;
	
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	num_char = num_to_char(nb);
	if (nb < 10)
	{
		write(1, &num_char, 1);
		return ;
	}
	new_number = nb / 10;
	last_digit = nb % 10;
	ft_putnbr(new_number);
	num_char = num_to_char(last_digit);
	write(1, &num_char, 1);
}
