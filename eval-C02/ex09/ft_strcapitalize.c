/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apapavas <apapavas@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 12:35:46 by apapavas          #+#    #+#             */
/*   Updated: 2024/02/07 13:22:06 by apapavas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
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
	return (str);
}
