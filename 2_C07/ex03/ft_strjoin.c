/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:41:41 by tkupler           #+#    #+#             */
/*   Updated: 2024/02/18 19:55:12 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	total_length; //size_t?

	int	num_separators;
	int	i;
	int	j;
	int	sep_len;
	char *result;
	char *dst;
	char *str;

	if (size == 0) {
		char *result = malloc(1);
		if (result) {
			result[0] = '\0';
		}
		return result;
	}

	i = 0;
	total_length = 0;
	while(i < size)
	{
		total_length += ft_strlen(strs[i]);
		if (i < size - 1)
			total_length += ft_strlen(sep);
		i++;
	}
	result = (char *)malloc(total_length * sizeof(char));
	if (!result)
		return (0);
	dst = result;
	i = 0;
	while(i < size)
	{
		str = strs[i];
		if (*str)
		{
			while (*str)
				*dst++ = *str++;
			if (i < num_separators)
			{
				j = 0;
				while (j < sep_len)
				{
					*dst++ = sep[j];
					j++;
				}
			}
		}
		i++;
	}
	*dst = '\0';
	return result;
}
