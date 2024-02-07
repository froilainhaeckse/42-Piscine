/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:21:36 by tkupler           #+#    #+#             */
/*   Updated: 2024/02/07 16:29:15 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		div;
	int		mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

// int main() {
//     int a = 3;
//     int b = 4;
//     printf("Num 1 Before ft_div_mod: %d\n", a);
//     printf("Num 2 Before ft_div_mod: %d\n", b);
//     ft_ultimate_div_mod(&a, &b);
//     printf("Num 1 After ft_div_mod: %d\n", a);
//     printf("Num 2 After ft_div_mod: %d\n", b);
//     return 0;
// }