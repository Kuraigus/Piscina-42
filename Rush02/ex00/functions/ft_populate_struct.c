/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_populate_struct.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joguntij <joguntij@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 19:40:27 by joguntij          #+#    #+#             */
/*   Updated: 2019/12/08 20:23:46 by joguntij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/structs.h"

void	ft_populate_struct(char *res, t_word *test, int tam_vet, int k)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (i < tam_vet)
	{
		k = 0;
		while (res[i] != ':')
		{
			test[j].keys[k++] = res[i];
			i++;
		}
		i++;
		k = 0;
		while (res[i] == ' ')
			i++;
		while (res[i] != '\n')
		{
			test[j].values[k++] = res[i];
			i++;
		}
		i++;
		j++;
	}
}
