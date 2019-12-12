/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joguntij <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 22:37:57 by joguntij          #+#    #+#             */
/*   Updated: 2019/11/21 01:31:00 by joguntij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char pri;
	char seg;

	pri = 0;
	seg = 0;
	while (pri < 100)
	{
		seg = pri + 1;
		while (seg < 100)
		{
			ft_putchar(pri / 10 + '0');
			ft_putchar(pri % 10 + '0');
			ft_putchar(' ');
			ft_putchar(seg / 10 + '0');
			ft_putchar(seg % 10 + '0');
			if (pri / 10 != 9 || pri % 10 != 8)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			seg++;
		}
		pri++;
	}
}
