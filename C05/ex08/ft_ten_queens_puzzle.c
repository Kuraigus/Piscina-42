/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joguntij <joguntij@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 22:56:43 by joguntij          #+#    #+#             */
/*   Updated: 2019/12/04 16:24:53 by joguntij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_board(int board[10][10])
{
	int x;
	int y;

	y = 0;
	while (y < 10)
	{
		x = 0;
		while (x < 10)
		{
			if (board[x][y])
			{
				ft_putchar(x + 48);
			}
			x++;
		}
		y++;
	}
	ft_putchar('\n');
}

int		ft_safe_place(int board[10][10], int lin, int col)
{
	int i;
	int j;

	i = 0;
	while (i < col)
	{
		if (board[lin][i++] == 1)
			return (0);
	}
	i = lin;
	j = col;
	while (j >= 0 && i >= 0)
	{
		if (board[i--][j--] == 1)
			return (0);
	}
	i = lin;
	j = col;
	while (j >= 0 && i < 10)
	{
		if (board[i++][j--] == 1)
			return (0);
	}
	return (1);
}

int		ft_board_solve(int board[10][10], int col)
{
	int			lin;
	static int	ctd;

	if (col == 10)
	{
		ft_print_board(board);
		ctd++;
		return (1);
	}
	lin = 0;
	while (lin < 10)
	{
		if (ft_safe_place(board, lin, col))
		{
			board[lin][col] = 1;
			ft_board_solve(board, col + 1);
			board[lin][col] = 0;
		}
		lin++;
	}
	return (ctd);
}

int		ft_ten_queens_puzzle(void)
{
	int board[10][10];
	int i;
	int j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			board[i][j] = 0;
			j++;
		}
		i++;
	}
	return (ft_board_solve(board, 0));
}
