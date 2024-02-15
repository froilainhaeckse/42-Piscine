/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 00:15:32 by tkupler           #+#    #+#             */
/*   Updated: 2024/02/15 00:28:04 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb <= 2)
		return (2);
	i = 2;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (ft_find_next_prime(nb +1));
		i++;
	}
	return (nb);
}