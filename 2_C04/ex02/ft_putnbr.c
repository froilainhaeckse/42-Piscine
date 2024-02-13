/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 22:16:45 by tkupler           #+#    #+#             */
/*   Updated: 2024/02/13 22:42:17 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

char	num_to_char(int digit)
{
	return (digit + '0');
}

// For a 32-bit int, the range is typically -2147483648 to 2147483647
void	ft_putnbr(int nb)
{
	char	num_char;

	if (nb == INT_MIN)
	{
		ft_putnbr(nb / 10);
		write(1, "8", 1);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	num_char = num_to_char(nb % 10);
	write(1, &num_char, 1);
}
