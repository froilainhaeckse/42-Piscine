/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 16:46:49 by tkupler           #+#    #+#             */
/*   Updated: 2024/02/11 13:37:13 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	error_handling(int argc, char *input);
void	init_grid(int grid[4][4]);
void	print_grid(int grid[4][4]);
int		solve_grid(int grid[4][4], char *viewpoints, int row, int col);
void	error_message_solving_grid(void);

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
	if (!solve_grid(grid, viewpoints, 0, 0))
	{
		error_message_solving_grid();
		return (1);
	}
	print_grid(grid);
	return (0);
}
