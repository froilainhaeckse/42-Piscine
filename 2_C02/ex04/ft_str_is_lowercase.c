/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 23:09:45 by tkupler           #+#    #+#             */
/*   Updated: 2024/02/10 00:11:23 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if ((*str < 'a' || *str > 'z') && *str != ' ')
			return (0);
		str++;
	}
	return (1);
}

// int	main()
// {
// 	char	src[] = "abcddfe";
// 	char	result = ft_str_is_lowercase(src);

// 	printf("Before Source: %s", src);
// 	printf("\n");
// 	printf("Result: %c", result);
// 	printf("\n");
// 	return (0);
// }