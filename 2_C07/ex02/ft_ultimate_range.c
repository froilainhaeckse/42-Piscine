/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 11:18:28 by tkupler           #+#    #+#             */
/*   Updated: 2024/02/15 13:32:46 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	*arr;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	arr = (int *)malloc(size * sizeof(int));
	if (arr == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = arr;
	i = 0;
	while (i < size)
	{
		arr[i] = min + i;
		i++;
	}
	return (size);
}

/*#include <stdio.h>

int main(void) {
	int *range;
	int size;

	size = ft_ultimate_range(&range, 0, 5);
	if (size != 5 || range == NULL) {
		printf("Test 1 failed\n");
		return 1;
	}
	for (int i = 0; i < size; i++) {
		printf("%d ", range[i]);
	}
	printf("\n");
	free(range);

	size = ft_ultimate_range(&range, 5, 5);
	if (size != 0 || range != NULL) {
		printf("Test 2 failed\n");
		return 1;
	}

	size = ft_ultimate_range(&range, -5, 5);
	if (size != 10 || range == NULL) {
		printf("Test 3 failed\n");
		return 1;
	}
	for (int i = 0; i < size; i++) {
		printf("%d ", range[i]);
	}
	printf("\n");
	free(range);

	size = ft_ultimate_range(&range, -10, -5);
	if (size != 5 || range == NULL) {
		printf("Test 4 failed\n");
		return 1;
	}
	for (int i = 0; i < size; i++) {
		printf("%d ", range[i]);
	}
	printf("\n");
	free(range);

	printf("All tests passed\n");
	return 0;
}*/