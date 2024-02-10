/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate_grid.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 21:53:38 by tkupler           #+#    #+#             */
/*   Updated: 2024/02/10 23:08:01 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_grid_valid(int grid[4][4], char *viewpoints);

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

int	solve_grid(int grid[4][4], char *viewpoints, int row, int col)
{
	int	num;

	if (row == 4 && col == 0)
		return (is_grid_valid(grid, viewpoints));
	num = 1;
	while (num <= 4)
	{
		grid[row][col] = num;
		if (col == 3)
		{
			if (solve_grid(grid, viewpoints, row + 1, 0))
				return (1);
		}
		else
		{
			if (solve_grid(grid, viewpoints, row, col + 1))
				return (1);
		}
		num++;
	}
	grid[row][col] = 0;
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
