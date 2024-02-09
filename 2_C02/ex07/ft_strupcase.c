/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 23:21:19 by tkupler           #+#    #+#             */
/*   Updated: 2024/02/09 23:34:54 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	ft_strupcase(char *str)
{
	while (*str != '\0')
	{
        if (*str >= 'a' && *str <= 'z')   
		    *str -= 32;
		str++;
	}
    return (*str);
}

// int	main()
// {
// 	char	src[] = "abcdsrf";

// 	printf("Before Source: %s", src);
// 	printf("\n");
//     ft_strupcase(src);
// 	printf("After: %s", src);
// 	printf("\n");
// 	return (0);
// }