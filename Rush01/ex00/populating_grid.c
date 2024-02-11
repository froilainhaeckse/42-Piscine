/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   populating_grid.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 17:33:41 by tkupler           #+#    #+#             */
/*   Updated: 2024/02/11 17:39:25 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	place_number(int grid[4][4], int row, int col, int num);

int	populate_row_for_viewpoint(int grid[4][4], char *viewpoints, int i)
{
	int	col;
	int	row;
	int	num;

	num = 1;
	col = 0;
	row = 0;
	if (viewpoints[i] == '4' && viewpoints[i + 4] == '1')
	{
		while (col < 4)
		{
			place_number(grid, i - 8, col, num);
			col++;
			num++;
		}
	}
	else if (viewpoints[i] == '1')
	{
		place_number(grid, i - 8, 0, 4);
	}
	return (1);
}

int	populate_column_for_viewpoint(int grid[4][4], char *viewpoints, int i)
{
	int	col;
	int	row;
	int	num;

	num = 1;
	row = 0;
	col = 0;
	if (viewpoints[i] == '4' && viewpoints[i + 4] == '1')
	{
		while (row < 4)
		{
			place_number(grid, row, i, num);
			row++;
			num++;
		}
	}
	else if (viewpoints[i] == '1')
	{
		place_number(grid, 0, i, 4);
	}
	return (1);
}

int	populate_based_on_viewpoints(int grid[4][4], char *viewpoints)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		populate_column_for_viewpoint(grid, viewpoints, i);
		i++;
	}
	i = 8;
	while (i > 7 && i < 12)
	{
		populate_row_for_viewpoint(grid, viewpoints, i);
		i++;
	}
	return (1);
}

void	place_number(int grid[4][4], int row, int col, int num)
{
	grid[row][col] = num;
}
