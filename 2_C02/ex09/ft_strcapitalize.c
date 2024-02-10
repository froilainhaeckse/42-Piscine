/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 23:35:48 by tkupler           #+#    #+#             */
/*   Updated: 2024/02/10 09:22:23 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	capitalize_next(char str)
{
	int	cap_next_i;

	if ((str >= 'a' && str <= 'z') || (str >= 'A' && str <= 'Z'))
		cap_next_i = 0;
	else if (str >= '0' && str <= '9')
		cap_next_i = 0;
	else
		cap_next_i = 1;
	return (cap_next_i);
}

char	ft_strcapitalize(char *str)
{
	int	i;
	int	cap_next_i;

	i = 0;
	cap_next_i = 1;
	while (str[i] != '\0')
	{
		if (cap_next_i)
		{
			if ((str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		cap_next_i = capitalize_next(str[i]);
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
