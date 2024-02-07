/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:16:41 by tkupler           #+#    #+#             */
/*   Updated: 2024/02/07 16:30:29 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int main() {
//     int div = 0;
//     int mod = 0;
//     int a = 3;
//     int b = 4;
//     printf("Num 1 Before ft_div_mod: %d\n", div);
//     printf("Num 2 Before ft_div_mod: %d\n", mod);
//     ft_div_mod(a, b, &div, &mod)
//     printf("Num 1 After ft_div_mod: %d\n", div);
//     printf("Num 2 After ft_div_mod: %d\n", mod);
//     return 0;
// }