/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joguntij <joguntij@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 11:11:51 by joguntij          #+#    #+#             */
/*   Updated: 2019/12/08 20:27:51 by joguntij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/structs.h"
#include "headers/headers.h"
#include "headers/ft.h"

#define MAX_BUF_SIZE 4096

int	main(int argc, char *argv[])
{
	int		tam_vet;
	int		tam_lin;
	char	res[MAX_BUF_SIZE];
	t_word	*test;

	if (ft_verify_values(argv[1], argc))
	{
		ft_putstr("error\n");
		return (0);
	}
	ft_open_file(res, MAX_BUF_SIZE);
	tam_vet = ft_strlen(res);
	tam_lin = ft_strlen_newline(res);
	test = (t_word*)malloc(sizeof(t_word) * tam_lin);
	ft_populate_struct(res, test, tam_vet, 0);
	if (ft_check_dict(tam_lin, argv[1], test))
		return (0);
	ft_print_three_numbers(argv[1], test, tam_lin);
	return (0);
}
