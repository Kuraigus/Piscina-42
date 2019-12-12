/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joguntij <joguntij@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 19:40:51 by joguntij          #+#    #+#             */
/*   Updated: 2019/12/01 21:11:10 by joguntij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "allheaders.h"

int		ft_continue_verify_numbers(char *values)
{
	int i;
	int quatro;

	i = 0;
	quatro = 0;
	while (values[i])
	{
		if (values[i] == '4')
			quatro++;
		if (quatro > 4)
		{
			ft_putstr("Error\n");
			return (0);
		}
		i++;
	}
	ft_logic_start(values);
	return (0);
}

int		ft_verify_numbers(char *values, int i)
{
	int um;
	int dois;
	int tres;

	um = 0;
	dois = 0;
	tres = 0;
	i = 0;
	while (values[i])
	{
		if (values[i] == '1')
			um++;
		else if (values[i] == '2')
			dois++;
		else if (values[i] == '3')
			tres++;
		if (um > 4 || dois > 8 || tres > 8)
		{
			ft_putstr("Error\n");
			return (0);
		}
		i++;
	}
	ft_continue_verify_numbers(values);
	return (0);
}

int		ft_continue_verify(char *values, int i)
{
	if (i != 31 || (i % 2 == 0 && values[i] == ' '))
	{
		ft_putstr("Error\n");
		return (0);
	}
	ft_verify_numbers(values, i);
	return (0);
}

int		ft_verify(int counts, char *values)
{
	int i;

	i = 0;
	if (counts != 2 || values == '\0' || values[30] == ' ')
	{
		ft_putstr("Error\n");
		return (0);
	}
	while (values[i])
	{
		if ((values[i] != ' ' && values[i] != '1' && values[i] != '2'
		&& values[i] != '3' && values[i] != '4'))
		{
			ft_putstr("Error\n");
			return (0);
		}
		else if ((i % 2 != 0) && values[i] != ' ')
		{
			ft_putstr("Error\n");
			return (0);
		}
		i++;
	}
	ft_continue_verify(values, i);
	return (0);
}
