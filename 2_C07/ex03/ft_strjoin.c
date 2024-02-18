/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:41:41 by tkupler           #+#    #+#             */
/*   Updated: 2024/02/18 23:36:33 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;
	int		j;
	int		k;

	result = malloc(sizeof(strs));
	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			result[k++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] && i != size - 1)
		{
			result[k++] = sep[j++];
		}
		i++;
	}
	result[k] = '\0';
	return (result);
}

/*int	main(void)
{
	char	*tab[4];
	tab[0] = "hello";
	tab[1] = "this";
	tab[2] = "is";
	tab[3] = "something";
	printf("%s", ft_strjoin(4, tab, "seperator"));
	return (0);
}*/