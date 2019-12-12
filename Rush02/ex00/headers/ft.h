/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joguntij <joguntij@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 14:43:44 by joguntij          #+#    #+#             */
/*   Updated: 2019/12/08 20:26:26 by joguntij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include "structs.h"

int		ft_strlen_newline(char *str);
void	ft_putstr(char *str);
void	ft_putchar(char c);
int		ft_check_input(char *str);
int		ft_verify_values(char *str, int count);
int		ft_valuelen(char *str);
void	ft_create_line(char *str);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_charcmp(char c1, char c2);
void	ft_print_three_numbers(char *argv, t_word *test, int tam_lin);
void	ft_populate_struct(char *res, t_word *test, int tam_vet, int k);
int		ft_check_dict(int tam_lin, char *argv, t_word *test);
void	ft_open_file(char *res, int size);

#endif
