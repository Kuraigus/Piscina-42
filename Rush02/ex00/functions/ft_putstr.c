/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joguntij <joguntij@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 14:47:26 by joguntij          #+#    #+#             */
/*   Updated: 2019/12/08 12:29:39 by joguntij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/headers.h"
#include "../headers/ft.h"

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}
