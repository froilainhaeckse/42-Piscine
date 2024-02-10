/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_grid.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 23:00:30 by tkupler           #+#    #+#             */
/*   Updated: 2024/02/10 23:43:08 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int	rowValid(int row[4])
{
	// 	Checks if a row contains unique 1-4
	// Loops through given row
	// Counts occurrences of 1, 2, 3, 4
	// Returns 1 if exactly one of each, 0 otherwise
	// 	Same logic as rowValid but checks a column
	// Passed a column extracted from grid
}

int	colValid(int col[4])
{
	// Same logic as rowValid but checks a column
	// Passed a column extracted from grid
}

int*	getCol(int grid[4][4], int colIndex)
{
	// Given a grid and index, returns pointer to that column
	// Used to pass columns to colValid method
}

int	is_grid_valid(int grid[4][4], char *viewpoints)
{
	int		row;
	int		col;
	int		idx;
	int		i;
	int		dir;
	int		vp;
	int		matches;

	row = 0;
	while (row < 4)
	{
		if (!rowValid(grid[row]))
			return (0);
		row++;
	}
	while (col < 4)
	{
		if (!colValid(getCol(grid, col)))
			return (0);
		col++;
	}
	idx = 0;
	dir = 0;
	i = 0;
	while (dir < 2)
	{
		while (i < 4)
		{
			vp = viewpoints[idx] - '0';
			idx++;
			matches = countVisible(grid, i, dir);
			if (matches != vp)
				return (0);
			i++;
		}
		dir++;
	}
// Check all rows 
// Similar to columns 
	return (1);
}

// Validate if the grid satisfies the viewpoints
bool	is_viewpoint_valid(int grid[4][4], char *viewpoints) {
	int	row;
	int	col;
	int	highest_view;
	int	visible_count;
	int	height;
	int	viewpoint;

	row = 0;
	col = 0;
	while (row < 4)
	{
		highest_view = 0;
		visible_count = 0;
		while (col < 4)
		{
			height = grid[row][col];
			if (height > highest_view) {
				highest_view = height;
				visible_count++;
			}
			col++;
		}
        // Compare the number of visible buildings with the viewpoint
		viewpoint = viewpoints[row] - '0';
		if (visible_count != viewpoint) {
			return false;  // Viewpoint constraint violated
		}
		row++;
	}
	row = 0;
	col = 0;
	while (col < 4)
	{
		highest_view = 0;  // Highest viewpoint encountered in the current column
		visible_count = 0;  // Number of buildings visible from the current column
		while (row < 4)
		{
			height = grid[row][col];
			if (height > highest_view) {
				highest_view = height;
				visible_count++;  // Increment visible count if the building is visible
			}
			row++;
		}
		// Compare the number of visible buildings with the viewpoint
		viewpoint = viewpoints[col + 4] - '0';  // Offset for columns in the viewpoints
		if (visible_count != viewpoint) {
			return false;  // Viewpoint constraint violated
		}
		col++;
	}
	return true;
}