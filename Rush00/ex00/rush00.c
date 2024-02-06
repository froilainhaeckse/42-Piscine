/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommasoud <ommasoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 12:03:44 by tkupler           #+#    #+#             */
/*   Updated: 2024/02/04 17:01:58 by ommasoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c);

void	display_row(int col_count, int col_limit, int row_count, int row_limit)
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
	ft_putchar('\n');
	write(1, "Be aware of integer overflow.", 30);
	write(1, "Too big numbers may lead to unexpected behavior.", 49);
	ft_putchar('\n');
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
		exit(0);
	}
	col_limit = x;
	row_limit = y;
	col_count = 0;
	row_count = 0;
	while (row_count < row_limit)
	{
		display_row(col_count, col_limit, row_count, row_limit);
		row_count++;
	}
}
