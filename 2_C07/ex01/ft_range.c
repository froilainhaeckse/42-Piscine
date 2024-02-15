/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 11:02:39 by tkupler           #+#    #+#             */
/*   Updated: 2024/02/15 13:41:14 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	k;
	int	*list;

	if (min >= max)
		return (NULL);
	list = (int *)malloc((max - min) * sizeof(int));
	if (list == NULL)
		return (NULL);
	i = 0;
	k = min;
	while (k < max)
	{
		list[i] = k;
		k++;
		i++;
	}
	return (list);
}
