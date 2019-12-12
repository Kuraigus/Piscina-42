/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joguntij <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 06:19:35 by joguntij          #+#    #+#             */
/*   Updated: 2019/11/21 06:25:12 by joguntij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_get_ind(int *vet, int n)
{
	int i;
	int max;

	i = 0;
	max = 10 - n;
	while (i < n)
	{
		if (vet[i] == max)
			return (i - 1);
		else if (i == (n - 1) && vet[i] < max)
			return (i);
		i++;
		max++;
	}
	return (-1);
}

void	ft_print_vet(int *vet, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		ft_putchar(vet[i] + '0');
		i++;
	}
}

void	ft_sum_vet(int ind, int *vet, int n)
{
	int i;

	i = ind + 1;
	vet[ind]++;
	while (i < n)
	{
		vet[i] = vet[i - 1] + 1;
		i++;
	}
}

void	ft_print_combn(int n)
{
	int ind;
	int i;
	int vet[n];

	i = 0;
	while (i < n)
	{
		vet[i] = i;
		i++;
	}
	while (ft_get_ind(vet, n) != -1)
	{
		ind = ft_get_ind(vet, n);
		ft_print_vet(vet, n);
		ft_sum_vet(ind, vet, n);
		ft_putchar(',');
		ft_putchar(' ');
	}
	ft_print_vet(vet, n);
}
