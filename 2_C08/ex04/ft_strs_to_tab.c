/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 10:55:30 by tkupler           #+#    #+#             */
/*   Updated: 2024/02/19 11:40:57 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_stock_str.h>
#include <stdlib.h>

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	if (ac <= 0 || !av)
		return (NULL);
	int	i;

	i = 0;
	while (av && i < ac)
	{
		t_stock_str.size = sizeof(av)
		av++;
		i++;
	}
	// ac = size of the array
	// **av = array of strings
}
