/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:06:17 by tkupler           #+#    #+#             */
/*   Updated: 2024/02/05 16:50:02 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print_combn(int n);

void	ft_putchar(char c)
{
	write(1, &c, 1);
	// write(1, ", ", 2);
}

void print_combination_recursive(int n, int current, int combination[])
{
    if (current == n)
    {
        if (combination[0] != 0) // Skip the comma for the first combination
        {
            // ft_putchar(',');
            // ft_putchar(' ');
        }

        // Print the combination
        int i = 0;
        while (i < n)
        {
            // ft_putchar('0' + combination[i]);
            i++;
        }
    }
    else
    {
        int start = combination[current - 1] + 1;
        while (start <= 9)
        {
            combination[current] = start;
            print_combination_recursive(n, current + 1, combination);
            start++;
        }
    }
}

void	print_combination(int n, int start_digit, int current_digit, int combination[])
{
	if (current_digit == n)
	{
		print_combination_recursive(n, 1, combination);
	}
	else
    {
        while (start_digit <= 9)
        {
			printf("combination:");
            combination[n - 1] = start_digit;
			int array_counter = 0;
			while (array_counter < n)
			{
				ft_putchar('0' + combination[array_counter]);
				// printf("%d", combination[array_counter]);
				array_counter++;
			}


			// printf("%d", combination[n - 1]);
            start_digit++;
			write(1, ", ", 2);
        }
		print_combination(n, start_digit + 1, current_digit + 1, combination);
    }
}

void	ft_print_combn(int n)
{
	if (n > 0 && n < 10)
	{
		int	combination[n];

		int array_counter = 0;
		while (array_counter < n)
		{
			combination[array_counter] = 0;
			array_counter++;
		}

		print_combination(n, 1, 0, combination);
	}
	else
	{
		write(1, "Allowed is only a digit between 0 and 10.", 41);
	}
}
