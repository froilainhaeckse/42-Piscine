/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 13:41:46 by tkupler           #+#    #+#             */
/*   Updated: 2024/02/07 16:20:41 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp_storage;

	temp_storage = *a;
	*a = *b;
	*b = temp_storage;
}

// int	main() {
// 	int		num1;
// 	int		num2 = 24;

// 	num1 = 42;
// 	num2 = 24;
//     printf("Num 1 Before ft_swap: %d\n", num1);
//     printf("Num 2 Before ft_swap: %d\n", num2);
//     ft_swap(&num1, &num2);
//     printf("Num 1 After ft_swap: %d\n", num1);
//     printf("Num 2 After ft_swap: %d\n", num2);
//     return 0;
// }