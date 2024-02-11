/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 20:56:03 by tkupler           #+#    #+#             */
/*   Updated: 2024/02/11 11:09:01 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>

void	error_message_wrong_input(void)
{
	write(1, "Error\n", 6);
	write(1, "Parse all your digits in one command. ", 39);
	write(1, "Only use digits between 0 and 4.\n", 34);
	write(1, "Each digit has to be seperated by one space. ", 46);
	write(1, "Everything placed within Quotes once.\n", 39);
	exit(0);
}

void	error_message_solving_grid(void)
{
	write(1, "Error\n", 6);
	write(1, "There was a problem solving the grid.\n", 38);
}

void	error_handling(int argc, char *input)
{
	int		i;
	int		digits_count;
	bool	wrong_argument_count;
	bool	characters_within_range;

	i = 0;
	digits_count = 1;
	wrong_argument_count = (argc != 2);
	if (wrong_argument_count)
		error_message_wrong_input();
	while (input[i] != '\0')
	{
		characters_within_range = (input[i] >= '1' && input[i] <= '4');
		if (characters_within_range && input[i + 1] == '\0')
			break ;
		if (!(characters_within_range && input[i + 1] == 32))
			error_message_wrong_input();
		i += 2;
		digits_count++;
	}
	if (digits_count != 16)
		error_message_wrong_input();
}
