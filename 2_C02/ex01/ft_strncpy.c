/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 12:14:18 by tkupler           #+#    #+#             */
/*   Updated: 2024/02/09 12:17:59 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
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
// // 	char	src[20];
// 	char	src[] = "theacodes";

// 	printf("Before Destination: %s", dest);
// 	printf("\n");
// 	printf("Before Source: %s", src);
// 	printf("\n");
// 	ft_strncpy(dest, src, 4);
// // 	ft_strncpy(dest, "theacodes");
// 	printf("After Destination: %s", dest);
// 	printf("\n");
// 	printf("After Source: %s", src);
// 	printf("\n");
// 	return (0);
// }