/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 00:30:10 by tkupler           #+#    #+#             */
/*   Updated: 2024/02/15 00:41:06 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char const *argv[])
{
	int		i;

	(void)argc;
	i = 0;
	while (argv[0][i])
		i++;
	write (1, argv[0], i);
	write (1, "\n", 1);
	return (0);
}
