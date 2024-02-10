/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 16:46:49 by tkupler           #+#    #+#             */
/*   Updated: 2024/02/10 21:47:12 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	error_handling(int argc, char *input);

void	init_grid(int grid[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
}

void	print_grid(int grid[4][4])
{
	char	c;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			c = '0' + grid[i][j];
			write(1, &c, 1);
			write(1, " ", 1);
		}
		write(1, "\n", 1);
	}
}

void	parse_input(char *input, char *viewpoints)
{
	int	j;

	j = 0;
	while (*input != '\0')
	{
		if (*input != 32)
		{
			viewpoints[j] = *input;
			j++;
		}
		input++;
	}
}

int	main(int argc, char **argv)
{
	char	viewpoints[16];
	char	*input;
	int		grid[4][4];

	input = argv[1];
	error_handling(argc, input);
	parse_input(input, viewpoints);
	init_grid(grid);
	print_grid(grid);
	return (0);
}
