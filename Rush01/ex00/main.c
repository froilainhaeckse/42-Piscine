/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 16:46:49 by tkupler           #+#    #+#             */
/*   Updated: 2024/02/10 21:08:25 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void error_handling(int argc, char *input);

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

	input = argv[1];
	error_handling(argc, input);
	parse_input(input, viewpoints);
	printf("Back here again!!!\n");
	return (0);
}
