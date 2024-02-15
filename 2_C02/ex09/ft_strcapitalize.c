/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 23:35:48 by tkupler           #+#    #+#             */
/*   Updated: 2024/02/15 19:24:53 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	capitalize_next(char str)
{
	int	cap_next_i;

	if (str == ',' || str == ' ' || str == '+' || str == '-' || str == '$')
		cap_next_i = 1;
	else
		cap_next_i = 0;
	return (cap_next_i);
}

char	ft_strcapitalize(char *str)
{
	int		i;
	int		cap_next_i;

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

/*int	main()
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char str1[] = "diujndfvon,odficj,dc dsfovij?kl43lo+dd-sdk%cdj*dc$sdc";
	ft_strcapitalize(str);
	ft_strcapitalize(str1);
	printf("%s\n", str);
	printf("%s\n", str1);
}*/