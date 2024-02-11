/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_grid.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 10:54:24 by tkupler           #+#    #+#             */
/*   Updated: 2024/02/11 22:21:27 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_unique(int grid[4][4], int row, int col, int num)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		if (grid[row][i] == num)
			return (0);
		i++;
	}
	j = 0;
	while (j < 4)
	{
		if (grid[j][col] == num)
			return (0);
		j++;
	}
	return (1);
}

int	min_expect_vals(int exp_num_1, int exp_num_2, int num)
{
	if (exp_num_1 == 2 || exp_num_2 == 2)
	{
		if (num == 4)
			return (0);
	}
	if (exp_num_1 == 3 || exp_num_2 == 3)
	{
		if (num == 3)
			return (0);
	}
	return (1);
}

int	is_valid(int grid[4][4], char *viewpoints, int position[2], int num)
{
	int	row;
	int	col;

	row = position[0];
	col = position[1];
	if (!is_unique(grid, row, col, num))
		return (0);
	if (col == 0 || col == 3)
	{
		if (!min_expect_vals(viewpoints[row + 8] - '0',
				viewpoints[row + 12] - '0', num))
			return (0);
	}
	if (row == 0 || row == 3)
	{
		if (!min_expect_vals(viewpoints[col] - '0',
				viewpoints[row + 12] - '0', num))
			return (0);
	}
	return (1);
}
