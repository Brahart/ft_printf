/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asinsard <asinsard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 17:33:04 by asinsard          #+#    #+#             */
/*   Updated: 2024/11/21 18:44:02 by asinsard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

include "libftprintf.h"

int	ft_printf(const char *, ...)
{
	va_start;
	if (va_arg == c)
		return (ft_putchar());
	else if (va_arg == x)
		return (ft_print_un(, "0123456789abcdef"));
	else if (va_arg == X)
		return (ft_print_un(, "0123456789ABCDEF"));
	else if (va_arg == u)
		return(ft_print_un(, "0123456789");
	else if (va_arg == p)
		return (ft_print_ptr(, "0123456789abcdef"));
	else if (va_arg == s)
		return (ft_putstr());
	else if (va_arg == %)
		return (ft_putchar('%'));
	else if (va_arg == d)
		return(ft_print_num(, "0123456789");
	else if (va_arg == i)
		return(ft_print_num(, "0123456789");
	
}
