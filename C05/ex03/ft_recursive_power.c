/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joguntij <joguntij@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 11:06:36 by joguntij          #+#    #+#             */
/*   Updated: 2019/12/03 18:45:28 by joguntij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int num;

	num = nb;
	if (num > num * nb)
		return (0);
	else if (power > 1)
		return (num * ft_recursive_power(num, power - 1));
	else if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
		return (num);
}
