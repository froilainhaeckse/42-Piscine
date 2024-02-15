/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 07:56:49 by tkupler           #+#    #+#             */
/*   Updated: 2024/02/10 08:31:25 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistdio.h>

void print_hexadecimal(int num) {
    char hex[17] = "0123456789abcdef"; // Array to map integer values to hexadecimal characters
    char buffer[3]; // Buffer to store hexadecimal representation (assuming 32-bit integer)

    // Convert integer to hexadecimal representation
    for (int i = 0; i < 8; i++) {
        buffer[i] = hex[(num >> (28 - i * 4)) & 0xF];
    }
    buffer[8] = '\0'; // Null-terminate the buffer

    // Display the hexadecimal representation using write
    write(1, buffer, 8);
}

void    ft_putstr_non_printable(char *str)
{
    int i;
    int j;

    i = 0;
    j = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 0 && str[i] <= 31) || str[i] == 127)
        {
            
			str[i] = 

        }
        else
        str[i] = 
		i++;
	}
	return (*str);

}

int	main()
{
	char	src[] = "Coucou\ntu vas bien ?";

	printf("Before Source: %s", src);
	printf("\n");
    ft_strcapitalize(src);
	printf("After: %s", src);
	printf("\n");
	return (0);
}
