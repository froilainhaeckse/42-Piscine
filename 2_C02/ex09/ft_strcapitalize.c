/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 23:35:48 by tkupler           #+#    #+#             */
/*   Updated: 2024/02/13 15:41:19 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	int		i;
	int		cap_next_i;
	char	*start;

	start = str;
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
	return (start);
}
