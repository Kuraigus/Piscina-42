/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joguntij <joguntij@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 19:09:13 by joguntij          #+#    #+#             */
/*   Updated: 2019/11/28 16:40:31 by joguntij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int number;

	if (nb < 0)
	{
		ft_putchar('-');
		number = nb * -1;
	}
	else
		number = nb;
	if (number >= 10)
		ft_putnbr(number / 10);
	ft_putchar(number % 10 + 48);
}
