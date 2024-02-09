/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 23:35:48 by tkupler           #+#    #+#             */
/*   Updated: 2024/02/09 23:47:09 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	ft_strcapitalize(char *str)
{
    int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			if (str[i - 1] < 'a' || str[i - 1] > 'z')
				if (str[i - 1] < 'A' || str[i - 1] > 'Z')
					str[i] = str[i] - 32;
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
