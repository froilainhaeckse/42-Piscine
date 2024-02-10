/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 23:03:13 by tkupler           #+#    #+#             */
/*   Updated: 2024/02/10 00:10:58 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if ((*str < '0' || *str > '9') && *str != ' ')
			return (0);
		str++;
	}
	return (1);
}

// int	main()
// {
// 	char	src[] = "abcdrr";
// 	char	result = ft_str_is_numeric(src);

// 	printf("Before Source: %s", src);
// 	printf("\n");
// 	printf("Result: %c", result);
// 	printf("\n");
// 	return (0);
// }