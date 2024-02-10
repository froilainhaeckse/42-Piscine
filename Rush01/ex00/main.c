/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 16:46:49 by tkupler           #+#    #+#             */
/*   Updated: 2024/02/10 17:51:23 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

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

void	error_handling(int argc)
{
	if (argc != 2)
	{
		write(1, "Error\n", 6);
		write(1, "Parse all your arguments in one command within Quotes.", 55);
		exit(0);
	}
}

int	main(int argc, char **argv)
{
	char	viewpoints[16];

	error_handling(argc);
	parse_input(argv[1], viewpoints);
	return (0);
}
