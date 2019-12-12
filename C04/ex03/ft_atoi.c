/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joguntij <joguntij@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 16:41:21 by joguntij          #+#    #+#             */
/*   Updated: 2019/11/28 22:38:00 by joguntij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int sinal;
	int num;
	int neg;

	neg = 0;
	sinal = 1;
	num = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n'
	|| *str == '\v' || *str == '\f' || *str == '\r')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sinal *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = (num * 10) + (*str - '0');
		str++;
	}
	return (num * sinal);
}
