/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_max_sub_square.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joguntij <joguntij@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 19:00:32 by joguntij          #+#    #+#             */
/*   Updated: 2019/12/11 20:09:21 by joguntij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/headers.h"
#include "../headers/ft.h"

void	print_max_sub_square(int **table, char *save_char, int tl, int tc)
{
	int i;
	int j;

	i = 0;
	while (i < tl)
	{
		j = 0;
		while (j < tc)
		{
			if (table[i][j] == 0)
				ft_putchar(table[i][j] + (save_char[1]));
			else if (table[i][j] == 1)
				ft_putchar(table[i][j] + (save_char[0] - 1));
			else if (table[i][j] == 2)
				ft_putchar(table[i][j] + (save_char[2] - 2));
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
