/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joguntij <joguntij@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 16:29:56 by joguntij          #+#    #+#             */
/*   Updated: 2019/12/11 21:26:36 by joguntij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/headers.h"
#include "../headers/ft.h"

int g_tl;
int g_tc;
int g_size;
char g_gc[4];

int		main(int argc, char *argv[])
{
	char	res[MAX_BUF_SIZE];
	int		file;
	int		i;
	int		**matrix;

	i = 1;
	while (i < argc)
	{
		file = open(argv[i], O_RDONLY);
		g_size = read(file, res, MAX_BUF_SIZE);
		res[g_size] = '\0';
		g_tc = ft_strlen_col(res, 2);
		ft_save_char(res, g_tc, g_gc);
		g_tl = ft_atoi(res, g_tc);
		g_tc = ft_strlen_col(res, 1);
		matrix = (int**)malloc(sizeof(int*) * g_tl);
		ft_populate_matrix(res, g_tc, matrix);
		ft_logic(matrix, g_tl, g_tc, g_gc);
		ft_free_malloc(matrix, g_tl);
		free(matrix);
		close(file);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
