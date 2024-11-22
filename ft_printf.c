/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asinsard <asinsard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 17:33:04 by asinsard          #+#    #+#             */
/*   Updated: 2024/11/22 19:23:21 by asinsard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_arg(va_list list, char c)
{
	if (c == 'c')
		return (ft_putchar(va_arg(list, int)));
	else if (c == 'x')
		return (ft_print_un(va_arg(list, unsigned int), "0123456789abcdef"));
	else if (c == 'X')
		return (ft_print_un(va_arg(list, unsigned int), "0123456789ABCDEF"));
	else if (c == 'u')
		return (ft_print_un(va_arg(list, unsigned int), "0123456789"));
	else if (c == 'p')
		return (ft_print_ptr(va_arg(list, void *), "0123456789abcdef"));
	else if (c == 's')
		return (ft_putstr(va_arg(list, char *)));
	else if (c == '%')
		return (ft_putchar('%'));
	else if (c == 'd')
		return (ft_print_int(va_arg(list, int), "0123456789"));
	else if (c == 'i')
		return (ft_print_int(va_arg(list, int), "0123456789"));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	list;
	size_t	i;
	int		count;

	i = 0;
	count = 0;
	if (!format)
		return (-1);
	va_start(list, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			count += ft_print_arg(list, format[i + 1]);
			i++;
		}
		else
		{
			count += ft_putchar(format[i]);
		}
		i++;
	}
	va_end(list);
	return (count);
}
#include "limits.h"
int	main(void)
{
	printf("mon printf1 = %d\n", ft_printf(" %p %p ", LONG_MIN, LONG_MAX));
	printf("vrai printf2 = %d\n", printf(" %p %p ", LONG_MIN, LONG_MAX));;
}
