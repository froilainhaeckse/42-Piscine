/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 20:56:03 by tkupler           #+#    #+#             */
/*   Updated: 2024/02/11 10:43:05 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	write_error_message(void)
{
	write(1, "Error\n", 6);
	write(1, "Parse all your digits in one command. ", 39);
	write(1, "Only use digits between 0 and 4.\n", 34);
	write(1, "Each digit has to be seperated by one space. ", 46);
	write(1, "Everything placed within Quotes once.\n", 39);
	exit(0);
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
		write_error_message();
	while (input[i] != '\0')
	{
		characters_within_range = (input[i] >= '1' && input[i] <= '4');
		if (characters_within_range && input[i + 1] == '\0')
			break ;
		if (!(characters_within_range && input[i + 1] == 32))
			write_error_message();
		i += 2;
		digits_count++;
	}
	if (digits_count != 16)
		write_error_message();
}
