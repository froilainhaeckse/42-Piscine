/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 23:12:11 by tkupler           #+#    #+#             */
/*   Updated: 2024/02/09 23:18:08 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if ((*str < 'A' || *str > 'Z') && *str != ' ')
			return ('0');
		str++;
	}
	return ('1');
}

// int	main()
// {
// 	char	src[] = "ABCDRF";
// 	char	result = ft_str_is_uppercase(src);

// 	printf("Before Source: %s", src);
// 	printf("\n");
// 	printf("Result: %c", result);
// 	printf("\n");
// 	return (0);
// }