/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 16:46:49 by tkupler           #+#    #+#             */
/*   Updated: 2024/02/10 20:51:15 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

void	parse_input(char *input, char *viewpoints)
{
	int	j;

	j = 0;
	while (*input != '\0')
	{
		if (*input >= '1' && *input <= '4')
		{
			viewpoints[j] = *input;
			j++;
		}
		input++;
	}
}

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
	bool	wrong_argument_count;
	bool	characters_within_range;

	i = 0;
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
	}
}

int	main(int argc, char **argv)
{
	char	viewpoints[16];
	char	*input;

	input = argv[1];
	error_handling(argc, input);
	printf("Back here again!!!\n");
	parse_input(input, viewpoints);
	return (0);
}
