/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 13:51:12 by tkupler           #+#    #+#             */
/*   Updated: 2024/02/06 13:05:41 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb);

void	ft_putnbr(int nb)
{
	char	buffer[20];
	int		digit_count;
	int		counter;	

	digit_count = snprintf(buffer, sizeof(buffer), "%d", nb);
	counter = 0;
	while (counter <= digit_count)
	{
		write(1, &buffer[counter], 1);
		counter++;
	}
	write(1, "\n", 1);
}
