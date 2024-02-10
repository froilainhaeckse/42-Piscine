/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 23:18:50 by tkupler           #+#    #+#             */
/*   Updated: 2024/02/10 00:11:48 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if ((*str < ' ' || *str > '~') && *str != ' ')
			return (0);
		str++;
	}
	return (1);
}

// int	main()
// {
// 	char	src[] = "ABCDRF";
// 	char	result = ft_str_is_printable(src);

// 	printf("Before Source: %s", src);
// 	printf("\n");
// 	printf("Result: %c", result);
// 	printf("\n");
// 	return (0);
// }