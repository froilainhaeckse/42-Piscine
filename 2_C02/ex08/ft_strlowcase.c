/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 23:32:17 by tkupler           #+#    #+#             */
/*   Updated: 2024/02/10 00:59:20 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	ft_strlowcase(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		str++;
	}
	return (*str);
}

// int	main()
// {
// 	char	src[] = "ASBCDFR";

// 	printf("Before Source: %s", src);
// 	printf("\n");
//  ft_strlowcase(src);
// 	printf("After: %s", src);
// 	printf("\n");
// 	return (0);
// }