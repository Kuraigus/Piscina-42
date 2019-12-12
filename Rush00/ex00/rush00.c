/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccamara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 19:43:13 by ccamara           #+#    #+#             */
/*   Updated: 2019/11/23 20:16:09 by ccamara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print(int x, int left, int mid, int right)
{
	ft_putchar(left);
	while (x > 2)
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
		ft_print(x, 'o', '-', 'o');
		y--;
		while (y > 1)
		{
			ft_print(x, '|', ' ', '|');
			y--;
		}
		if (y > 0)
		{
			ft_print(x, 'o', '-', 'o');
		}
	}
}
