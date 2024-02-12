/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 20:13:20 by tkupler           #+#    #+#             */
/*   Updated: 2024/02/12 20:30:53 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (*src != '\0')
	{
		dest[i] = *src;
		src++;
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char dest[50] = "Hello, ";
// 	char *src = "world!";
// 	ft_strcat(dest, src);
// 	printf("Concatenated string: %s\n", dest);
// 	return (0);
// }