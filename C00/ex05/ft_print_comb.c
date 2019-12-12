/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joguntij <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 21:38:07 by joguntij          #+#    #+#             */
/*   Updated: 2019/11/20 22:36:12 by joguntij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char pri;
	char seg;
	char ter;

	pri = '0' - 1;
	while (++pri <= '9')
	{
		seg = pri;
		while (++seg <= '9')
		{
			ter = seg + 1;
			while (ter <= '9')
			{
				ft_putchar(pri);
				ft_putchar(seg);
				ft_putchar(ter);
				if (pri != '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				ter++;
			}
		}
	}
}
