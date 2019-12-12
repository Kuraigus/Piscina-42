/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joguntij <joguntij@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 16:48:51 by joguntij          #+#    #+#             */
/*   Updated: 2019/12/05 17:00:12 by joguntij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		main(int argc, char *argv[])
{
	int i;

	i = 1;
	while (--argc)
	{
		ft_putstr(argv[i]);
		i++;
		write(1, "\n", 1);
	}
	return (0);
}
