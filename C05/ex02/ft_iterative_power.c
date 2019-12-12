/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joguntij <joguntij@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 10:55:29 by joguntij          #+#    #+#             */
/*   Updated: 2019/12/04 22:56:12 by joguntij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int res;

	res = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power-- > 1)
		res *= nb;
	return (res);
}
