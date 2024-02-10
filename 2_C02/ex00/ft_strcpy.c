/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 13:38:14 by tkupler           #+#    #+#             */
/*   Updated: 2024/02/09 12:15:23 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int	main()
// {
// 	char	dest[20];
// 	char	src[20];
// 	// char	src[] = "theacodes";

// 	printf("Before Destination: %s", dest);
// 	printf("\n");
// 	printf("Before Source: %s", src);
// 	printf("\n");
// 	// ft_strcpy(dest, src);
// 	ft_strcpy(dest, "theacodes");
// 	printf("After Destination: %s", dest);
// 	printf("\n");
// 	printf("After Source: %s", src);
// 	printf("\n");
// 	return (0);
// }