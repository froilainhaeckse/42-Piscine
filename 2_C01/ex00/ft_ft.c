/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 13:18:37 by tkupler           #+#    #+#             */
/*   Updated: 2024/02/07 16:20:08 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int main() {
    int number;
    
    number = 0;
    // Write C code here
    printf("Before: %d", number);
    printf("\n");
    ft_ft(&number);
    printf("After: %d", number);
    return 0;
}
