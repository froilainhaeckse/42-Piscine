/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 14:11:24 by tkupler           #+#    #+#             */
/*   Updated: 2024/02/14 14:34:14 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

int	ft_strlen(const char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	is_valid_base(const char *base)
{
	int	i;
	int	j;

	if (ft_strlen(base) < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_len;
	char	digit;

	if (!is_valid_base(base))
		return ;
	if (nbr == INT_MIN)
	{
		base_len = ft_strlen(base);
		ft_putnbr_base(nbr / base_len, base);
		digit = base[(-(nbr % base_len))];
		write(1, &digit, 1);
		return ;
	}
	if (nbr < 0)
	{
		write (1, "-", 1);
		nbr = -nbr;
	}
	base_len = ft_strlen(base);
	if (nbr >= base_len)
		ft_putnbr_base(nbr / base_len, base);
	digit = base[nbr % base_len];
	write(1, &digit, 1);
}
