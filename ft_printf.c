/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asinsard <asinsard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 17:33:04 by asinsard          #+#    #+#             */
/*   Updated: 2024/11/21 22:09:02 by asinsard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_arg(va_list list, char c, size_t *i)
{
	if (c == 'c')
		return (ft_putchar(va_arg(list, int)));
	else if (c == 'x')
		return (ft_print_un(va_arg(list, unsigned int), "0123456789abcdef"));
	else if (c == 'X')
		return (ft_print_un(va_arg(list, unsigned int), "0123456789ABCDEF"));
	else if (c == 'u')
		return(ft_print_un(va_arg(list, unsigned int), "0123456789"));
	else if (c == 'p')
		return (ft_print_ptr(va_arg(list, unsigned int), "0123456789abcdef"));
	else if (c == 's')
		return (ft_putstr(va_arg(list, char *)));
	else if (c == '%')
		return (ft_putchar('%'));
	else if (c == 'd')
		return(ft_print_int(va_arg(list, int), "0123456789"));
	else if (c == 'i')
		return(ft_print_int(va_arg(list, int), "0123456789"));
	return(0);
}

int	ft_printf(const char *format, ...)
{
	va_list	list;
	size_t	i;
	int	count;
	
	i = 0;
	if (!format)
		return (-1);
	va_start(list, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			count += ft_print_arg(list, format[i + 1], &i);
			i++;
		}
		else
			count += ft_putchar(format[i]);
		i++;
	}
	return (count);
}

/*int	main(void)
{
	ft_printf("qewrqre%c\n", 'v');
	printf("qwerqwe%c", 'v');
}*/
