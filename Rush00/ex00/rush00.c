/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 12:03:44 by tkupler           #+#    #+#             */
/*   Updated: 2024/02/03 17:39:21 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	display_cols(int col_count, int col_limit, int row_count, int row_limit)
{
	while (col_count < col_limit)
	{
		if ((col_count == 0) || (col_count == col_limit - 1))
		{
			if ((row_count == 0) || (row_count == row_limit - 1))
			{
				ft_putchar('o');
			}
			else
			{
				ft_putchar('|');
			}
		}
		else if (row_count > 0 && row_count < row_limit -1)
		{
			ft_putchar(' ');
		}
		else
		{
			ft_putchar('-');
		}
		col_count++;
	}
	ft_putchar('\n');
}

void	error_handling(void)
{
	write(1, "Only positive digits above 0 are allowed.", 42);
}

void	rush(int x, int y)

{
	int	col_limit;
	int	row_limit;
	int	col_count;
	int	row_count;

	if (x < 1 || y < 1)
	{
		error_handling();
	}
	col_limit = x;
	row_limit = y;
	col_count = 0;
	row_count = 0;
	while (row_count < row_limit)
	{
		display_cols(col_count, col_limit, row_count, row_limit);
		row_count++;
	}
}
