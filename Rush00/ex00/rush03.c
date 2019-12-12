/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccamara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 10:26:00 by ccamara           #+#    #+#             */
/*   Updated: 2019/11/23 11:44:33 by ccamara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_verify(int tcol, int tlin, int x, int y)
{
	if ((tlin == 1 || tlin == y) && (tcol == 1))
	{
		ft_putchar('A');
	}
	else if ((tlin == 1 || tlin == y) && (tcol == x))
	{
		ft_putchar('C');
	}
	else if ((tlin > 1 && tlin < y) && (tcol > 1 && tcol < x))
	{
		ft_putchar(' ');
	}
	else
	{
		ft_putchar('B');
	}
}

void	rush(int x, int y)
{
	int tcol;
	int tlin;

	tlin = 1;
	while (tlin <= y)
	{
		tcol = 1;
		while (tcol <= x)
		{
			ft_verify(tcol, tlin, x, y);
			tcol = tcol + 1;
		}
		ft_putchar('\n');
		tlin = tlin + 1;
	}
}
