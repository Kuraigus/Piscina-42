/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_col.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joguntij <joguntij@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 19:28:16 by joguntij          #+#    #+#             */
/*   Updated: 2019/12/11 05:01:38 by joguntij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/headers.h"

int		ft_strlen_col(char *str, int check)
{
	int i;
	int ctd;

	i = 0;
	ctd = 0;
	while (str[i] != '\n')
	{
		ctd++;
		i++;
	}
	ctd++;
	if (check != 1)
		return (ctd);
	i++;
	while (str[i] != '\n')
		i++;
	return (i - ctd);
}
