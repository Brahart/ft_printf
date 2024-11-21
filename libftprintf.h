/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asinsard <asinsard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 15:09:59 by asinsard          #+#    #+#             */
/*   Updated: 2024/11/21 18:26:40 by asinsard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdio.h>
#include <unistd.h>

int	print_ptr(size_t n);
int	ft_strlen(char	*s);
int	ft_printf(const *char, ...);
int	ft_print_un(size_t n, char *base);
int	ft_print_ptr(size_t n, char *base);
void	ft_put_base(size_t n, char *base);
int	ft_num_len(unsigned long int n);
int	ft_print_num(int n, char *base);

#endif