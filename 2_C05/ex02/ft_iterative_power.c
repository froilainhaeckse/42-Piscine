/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 23:15:35 by tkupler           #+#    #+#             */
/*   Updated: 2024/02/19 13:00:14 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	i = 1;
	result = 1;
	while (i <= power)
	{
		result *= nb;
		i++;
	}
	return (result);
}

/*int	main(void)
{
	printf("%d\n", ft_iterative_power(-4072, 0));
	printf("%d\n", ft_iterative_power(-1204, 1));
	printf("%d\n", ft_iterative_power(0, 0));
	printf("%d\n", ft_iterative_power(5, 2));
}*/