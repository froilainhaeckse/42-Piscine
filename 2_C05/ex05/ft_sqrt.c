/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 23:44:00 by tkupler           #+#    #+#             */
/*   Updated: 2024/02/19 13:55:42 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	guess;
	int	next_guess;

	if (nb < 0 || nb == 2 || nb > 46340)
		return (0);
	if (nb <= 1)
		return (nb);
	guess = nb / 2;
	while (1)
	{
		next_guess = (guess + nb / guess) / 2;
		if (next_guess == guess || next_guess == guess + 1)
			return (guess);
		guess = next_guess;
	}
}
