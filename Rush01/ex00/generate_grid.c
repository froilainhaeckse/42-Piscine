/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate_grid.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 21:53:38 by tkupler           #+#    #+#             */
/*   Updated: 2024/02/11 14:10:17 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_valid(int grid[4][4], char *viewpoints, int position[2], int num);

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

void	place_number(int grid[4][4], int row, int col, int num)
{
	grid[row][col] = num;
}

// Backtracking search function
// Tries all combinations by recursively placing numbers and checking validity
// Returns 1 if valid grid found, 0 otherwise
int	solve_grid(int grid[4][4], char *viewpoints, int row, int col)
{
	int	num;
	int	position[2];

	if (row > 3)
		return (1);
	else if (col > 3)
		return (solve_grid(grid, viewpoints, row + 1, 0));
	else if (grid[row][col] != 0)
		return (solve_grid(grid, viewpoints, row, col + 1));
	num = 1;
	while (num <= 4)
	{
		position[0] = row;
		position[1] = col;
		if (is_valid(grid, viewpoints, position, num))
		{
			place_number(grid, row, col, num);
			if (solve_grid(grid, viewpoints, row, col + 1))
				return (1);
			place_number(grid, row, col, 0);
		}
		num++;
	}
	return (0);
}

void	print_grid(int grid[4][4])
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			c = '0' + grid[i][j];
			write(1, &c, 1);
			write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
