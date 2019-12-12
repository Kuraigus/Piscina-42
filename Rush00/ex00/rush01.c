/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 12:07:10 by lcouto            #+#    #+#             */
/*   Updated: 2019/11/23 12:24:38 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_verify(int tcol, int tlin, int x, int y)
{
	if ((tlin == 1 && tcol == 1) || (tcol == x && tlin == y))
	{
		ft_putchar('/');
	}
	else if ((tlin == 1 && tcol == x) || (tcol == 1 && tlin == y))
	{
		ft_putchar('\\');
	}
	else if ((tlin > 1 && tlin < y) && (tcol > 1 && tcol < x))
	{
		ft_putchar(' ');
	}
	else
	{
		ft_putchar('*');
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
