/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_populate_matrix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joguntij <joguntij@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 18:50:34 by joguntij          #+#    #+#             */
/*   Updated: 2019/12/11 19:35:52 by lbonatti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/headers.h"

void	ft_populate_matrix(char *str, int col, int **mat)
{
	int i;
	int j;
	int k;

	k = 0;
	i = 6;
	while (str[i])
	{
		j = 0;
		mat[k] = (int*)malloc(sizeof(int) * col);
		while (str[i] && str[i] != '\n' && j < col)
		{
			if (str[i] == '.')
				mat[k][j] = str[i] - 45;
			else if (str[i] == 'o')
				mat[k][j] = str[i] - 111;
			j++;
			i++;
		}
		k++;
		i++;
	}
}
