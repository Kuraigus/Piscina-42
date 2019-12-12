/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_logic.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joguntij <joguntij@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 00:34:03 by joguntij          #+#    #+#             */
/*   Updated: 2019/12/11 20:09:32 by joguntij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/headers.h"
#include "../headers/ft.h"

int g_tamcol;
int g_tamlin;

void	ft_get_min(int new_table[g_tamlin][g_tamcol], int **table)
{
	int i;
	int j;

	i = 1;
	while (i < g_tamlin)
	{
		j = 1;
		while (j < g_tamcol)
		{
			if (table[i][j] == 1)
				new_table[i][j] = ft_min(new_table[i][j - 1],
										new_table[i - 1][j],
										new_table[i - 1][j - 1]) + 1;
			else
				new_table[i][j] = 0;
			j++;
		}
		i++;
	}
}

void	ft_populate_new_table(int new_table[g_tamlin][g_tamcol], int **table)
{
	int i;
	int j;

	i = 0;
	while (i < g_tamlin)
	{
		new_table[i][0] = table[i][0];
		i++;
	}
	j = 0;
	while (j < g_tamcol)
	{
		new_table[0][j] = table[0][j];
		j++;
	}
}

void	ft_get_max(int *max_i, int *max_j, int *max_of_s,
					int new_table[g_tamlin][g_tamcol])
{
	int i;
	int j;

	i = 0;
	while (i < g_tamlin)
	{
		j = 0;
		while (j < g_tamcol)
		{
			if (*max_of_s < new_table[i][j])
			{
				*max_of_s = new_table[i][j];
				*max_i = i;
				*max_j = j;
			}
			j++;
		}
		i++;
	}
}

void	ft_change_square(int **table, int new_table[g_tamlin][g_tamlin])
{
	int i;
	int j;
	int max_i;
	int max_j;
	int max_of_s;

	ft_get_max(&max_i, &max_j, &max_of_s, new_table);
	i = max_i;
	while (i > max_i - max_of_s)
	{
		j = max_j;
		while (j > max_j - max_of_s)
		{
			table[i][j] = 2;
			j--;
		}
		i--;
	}
}

void	ft_logic(int **table, int tam_lin, int tam_col, char *save_char)
{
	int new_table[tam_lin][tam_col];

	g_tamcol = tam_col;
	g_tamlin = tam_lin;
	ft_populate_new_table(new_table, table);
	ft_get_min(new_table, table);
	ft_change_square(table, new_table);
	print_max_sub_square(table, save_char, g_tamlin, g_tamcol);
}
