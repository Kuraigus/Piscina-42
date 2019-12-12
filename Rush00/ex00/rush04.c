/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 12:41:23 by lcouto            #+#    #+#             */
/*   Updated: 2019/11/23 14:21:42 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_charprint(int x, char left, char mid, char right)
{
	ft_putchar(left);
	while ((x) > 2)
	{
		ft_putchar(mid);
		x--;
	}
	if (x > 1)
	{
		ft_putchar(right);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		ft_charprint(x, 'A', 'B', 'C');
		y--;
		while (y > 1)
		{
			ft_charprint(x, 'B', ' ', 'B');
			y--;
		}
		if (y > 0)
		{
			ft_charprint(x, 'C', 'B', 'A');
		}
	}
}
