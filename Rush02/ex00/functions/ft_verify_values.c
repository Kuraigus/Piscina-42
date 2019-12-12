/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verify_values.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joguntij <joguntij@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 17:08:45 by joguntij          #+#    #+#             */
/*   Updated: 2019/12/08 13:10:39 by joguntij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft.h"

int		ft_verify_values(char *str, int count)
{
	if (count < 2)
		return (1);
	if (!ft_check_input(str) || str[0] == '\0')
		return (1);
	return (0);
}
