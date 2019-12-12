/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joguntij <joguntij@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 14:41:23 by joguntij          #+#    #+#             */
/*   Updated: 2019/12/07 11:40:57 by joguntij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_char_printable(char c)
{
	if (c >= ' ' && c != 127)
		return (1);
	return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	current;

	i = 0;
	while (str[i])
	{
		current = str[i];
		if (ft_char_printable(current))
			ft_putchar(current);
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[current / 16]);
			ft_putchar("0123456789abcdef"[current % 16]);
		}
		i++;
	}
}
