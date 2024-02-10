/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 12:19:42 by tkupler           #+#    #+#             */
/*   Updated: 2024/02/10 00:10:50 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if ((*str < 'a' || *str > 'z')
			&& (*str < 'A' || *str > 'Z')
			&& (*str != ' '))
			return (0);
		str++;
	}
	return (1);
}

// int	main()
// {
// 	char	src[] = "abcdefghijkl";
// 	char	result = ft_str_is_alpha(src);

// 	printf("Before Source: %s", src);
// 	printf("\n");
// 	printf("Result: %c", result);
// 	printf("\n");
// 	printf("After Source: %s", src);
// 	return (0);
// }