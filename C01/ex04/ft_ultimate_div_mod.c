/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joguntij <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 17:47:14 by joguntij          #+#    #+#             */
/*   Updated: 2019/11/21 17:54:12 by joguntij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int auxdiv;
	int auxmod;

	auxdiv = *a / *b;
	auxmod = *a % *b;
	*a = auxdiv;
	*b = auxmod;
}
