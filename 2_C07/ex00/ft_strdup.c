/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 10:05:16 by tkupler           #+#    #+#             */
/*   Updated: 2024/02/15 10:49:33 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	length(char *src)
{
	int		src_len;
	char	*src_ptr;

	src_ptr = src;
	src_len = 0;
	while (*src_ptr)
	{
		src_len++;
		src_ptr++;
	}
	return (src_len);
}

char	*ft_strdup(char *src)
{
	int		src_len;
	char	*src_ptr;
	char	*dest;
	int		i;

	if (!src)
		return (NULL);
	src_len = length(src);
	dest = (char *)malloc((src_len + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	i = 0;
	src_ptr = src;
	while (i <= src_len)
	{
		dest[i] = src_ptr[i];
		i++;
	}
	dest[src_len] = '\0';
	return (dest);
}

/*#include <stdio.h>
int main() {
	char *str = "Hello, world!";
	char *copy = ft_strdup(str);
	if (copy != NULL) {
		printf("Copied string: %s\n", copy);
		free(copy);
	}
	return 0;
}*/