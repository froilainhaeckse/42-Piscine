/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:41:41 by tkupler           #+#    #+#             */
/*   Updated: 2024/02/15 14:26:52 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	total_length;
	int	num_separators;
	int	i;
	int	j;
	int	sep_len;
	char *result;
	char *dst;
	char *str;

	i = 0;
	total_length = 0;
	while(i < size)
	{
		if (strs[i] == NULL)
			return (NULL);
		while (*strs[i])
		{
			total_length++;
			strs[i]++;
		}
		i++;
	}
	sep_len = 0;
	while (sep[sep_len])
		sep_len++;
	num_separators = size - 1;
	if (num_separators > 0)
		total_length += num_separators * sep_len;
	result = (char *)malloc(total_length * sizeof(char));
	if (result == NULL)
		return NULL;
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
