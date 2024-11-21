/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrahamsinsard <abrahamsinsard@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 15:09:59 by asinsard          #+#    #+#             */
/*   Updated: 2024/11/21 23:02:44 by abrahamsins      ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int		ft_strlen(char	*s);
int		ft_printf(const char *format, ...);
int		ft_print_un(unsigned int n, char *base);
int		ft_print_ptr(size_t n, char *base);
void	ft_put_base(size_t n, char *base);
int		ft_num_len(long long int n);
int		ft_print_int(int n, char *base);
int		ft_putstr(char *str);
int		ft_putchar(char c);
int		ft_print_arg(va_list list, char c);

#endif