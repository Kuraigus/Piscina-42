/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_dict.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joguntij <joguntij@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 19:46:29 by joguntij          #+#    #+#             */
/*   Updated: 2019/12/08 20:06:21 by joguntij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/structs.h"
#include "../headers/ft.h"

int		ft_check_dict(int tam_lin, char *argv, t_word *test)
{
	int i;

	i = 0;
	while (i < tam_lin)
	{
		if (ft_strcmp(argv, test[i].keys) == 0)
		{
			ft_putstr(test[i].values);
			ft_putchar('\n');
			return (1);
		}
		i++;
	}
	return (0);
}
