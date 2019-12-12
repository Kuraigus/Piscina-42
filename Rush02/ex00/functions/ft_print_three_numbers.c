/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_three_numbers.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joguntij <joguntij@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 16:55:42 by joguntij          #+#    #+#             */
/*   Updated: 2019/12/08 20:20:08 by joguntij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/structs.h"
#include "../headers/ft.h"
#include "../headers/headers.h"

void	ft_print_hundred(char *argv, int j, t_word *test)
{
	while (j < 10)
	{
		if (ft_charcmp(argv[0], test[j].keys[0]))
		{
			ft_putstr(test[j].values);
			ft_putstr(" hundred ");
		}
		j++;
	}
}

void	ft_print_decimal(char *argv, int j, t_word *test)
{
	j = 20;
	while (j < 29)
	{
		if (ft_charcmp(argv[1], test[j].keys[0]))
		{
			ft_putstr(test[j].values);
			ft_putchar('-');
		}
		j++;
	}
}

void	ft_print_unity(char *argv, int j, t_word *test)
{
	while (j < 10)
	{
		if (ft_charcmp(argv[2], test[j].keys[0]))
		{
			ft_putstr(test[j].values);
		}
		j++;
	}
}

void	ft_print_three_numbers(char *argv, t_word *test, int tam_lin)
{
	int i;

	i = 0;
	while (i < tam_lin)
	{
		if (i == 0)
			ft_print_hundred(argv, 0, test);
		else if (i == 1)
			ft_print_decimal(argv, 20, test);
		else if (i == 2)
			ft_print_unity(argv, 0, test);
		i++;
	}
	ft_putchar('\n');
}
