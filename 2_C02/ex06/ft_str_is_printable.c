/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 23:18:50 by tkupler           #+#    #+#             */
/*   Updated: 2024/02/13 15:29:30 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if ((*str < ' ' || *str > '~') && *str != ' ')
			return (0);
		str++;
	}
	return (1);
}
