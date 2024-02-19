/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 23:24:34 by tkupler           #+#    #+#             */
/*   Updated: 2024/02/19 13:02:19 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

/*int	main(void)
{
	printf("%d\n", ft_recursive_power(-4072, 0));
	printf("%d\n", ft_recursive_power(-1204, 1));
	printf("%d\n", ft_recursive_power(0, 0));
	printf("%d\n", ft_recursive_power(5, 2));
}*/