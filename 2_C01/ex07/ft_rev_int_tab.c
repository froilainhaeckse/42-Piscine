/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 11:18:00 by tkupler           #+#    #+#             */
/*   Updated: 2024/02/08 11:54:27 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}

// int	main(void)
// {
// 	int	list_of_ints[] = {1,2,3,4,5, 6};
// 	int size = 6;

// 	printf("Original array: ");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", list_of_ints[i]);
//     }
//     printf("\n");
// 	ft_rev_int_tab(list_of_ints, size);

// 	printf("Reversed array: ");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", list_of_ints[i]);
//     }
//     printf("\n");
// 	return 0;
// }