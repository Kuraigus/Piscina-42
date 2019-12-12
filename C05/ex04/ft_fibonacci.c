/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joguntij <joguntij@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 12:38:19 by joguntij          #+#    #+#             */
/*   Updated: 2019/12/03 18:46:12 by joguntij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	int aux;

	if (index > 1)
	{
		aux = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (aux);
	}
	else if (index == 1)
		return (1);
	else if (index == 0)
		return (0);
	else
		return (-1);
}
