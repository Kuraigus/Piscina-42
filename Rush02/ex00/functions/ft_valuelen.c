/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valuelen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joguntij <joguntij@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 14:42:54 by joguntij          #+#    #+#             */
/*   Updated: 2019/12/08 12:29:34 by joguntij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_valuelen(char *str)
{
	int i;
	int j;

	i = 0;
	while (str[i] == '0')
		i++;
	j = i;
	while (str[i])
		i++;
	return (i - j);
}
