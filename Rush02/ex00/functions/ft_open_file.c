/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joguntij <joguntij@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 19:52:33 by joguntij          #+#    #+#             */
/*   Updated: 2019/12/08 20:24:54 by joguntij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft.h"
#include "../headers/headers.h"

void	ft_open_file(char *res, int size)
{
	int		file;
	int		ret;

	file = open("numbers.dict", O_RDONLY);
	ret = read(file, res, size);
}
