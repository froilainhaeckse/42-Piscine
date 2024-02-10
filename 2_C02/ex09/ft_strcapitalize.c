/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 23:35:48 by tkupler           #+#    #+#             */
/*   Updated: 2024/02/10 00:56:37 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	ft_strcapitalize(char *str)
{
	int	i;
	int capitalize_next = 1;

    i = 0;

    while (str[i] != '\0')
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            if (capitalize_next)
		    {
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] -= 32;
				capitalize_next = 0;
			}
            else
			{
				if (str[i] >= 'A' && str[i] <= 'Z')
					str[i] += 32;
			}
        }
        else if (str[i] >= '0' && str[i] <= '9')
            capitalize_next = 0;
        else
        {
            capitalize_next = 1;
        }
        i++;
    }
    return (*str);
}

// int	main()
// {
// 	char	src[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

// 	printf("Before Source: %s", src);
// 	printf("\n");
//     ft_strcapitalize(src);
// 	printf("After: %s", src);
// 	printf("\n");
// 	return (0);
// }
