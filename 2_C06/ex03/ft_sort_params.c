/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 15:09:34 by tkupler           #+#    #+#             */
/*   Updated: 2024/02/18 19:20:15 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

#define MAX_ARGS 50

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_write_list(char **list)
{
	int	i;
	int	j;

	i = 0;
	while (list[i])
	{
		j = 0;
		while (list[i][j])
		{
			write (1, &list[i][j], 1);
			j++;
		}
		write (1, "\n", 1);
		i++;
	}
}

void	ft_sort_list(char **list, int n)
{
	int	i;
	int	j;

	i = 0;
	while (list[i])
	{
		j = 0;
		while (j < n - i - 1)
		{
			if ((ft_strcmp(list[j], list[j + 1]) > 0))
			{
				ft_swap(&list[j], &list[j + 1]);
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	char	*sorted_list[MAX_ARGS];

	i = 0;
	if (argc < 2)
		return (1);
	while (i < argc - 1 && i < MAX_ARGS)
	{
		sorted_list[i] = argv[i + 1];
		i++;
	}
	sorted_list[i] = NULL;
	ft_sort_list (sorted_list, argc - 1);
	ft_write_list (sorted_list);
	return (0);
}
