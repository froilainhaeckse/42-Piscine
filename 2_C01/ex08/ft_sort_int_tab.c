/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 11:38:23 by tkupler           #+#    #+#             */
/*   Updated: 2024/02/08 11:55:39 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int		outer_index;
	int		inner_index;
	int		swap_temp;

	outer_index = 0;
	while (outer_index < size -1)
	{
		inner_index = 0;
		while (inner_index < size - outer_index - 1)
		{
			if (tab[inner_index] > tab[inner_index + 1])
			{
				swap_temp = tab[inner_index];
				tab[inner_index] = tab[inner_index + 1];
				tab[inner_index + 1] = swap_temp;
			}
			inner_index++;
		}
		outer_index++;
	}
}

// int	main(void)
// {
// 	int	list_of_ints[] = {6,5,3,4,1,2};
// 	int size = 6;

// 	printf("Original array: ");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", list_of_ints[i]);
//     }
//     printf("\n");
// 	ft_sort_int_tab(list_of_ints, size);
// 	printf("Reversed array: ");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", list_of_ints[i]);
//     }
//     printf("\n");
// 	return 0;
// }