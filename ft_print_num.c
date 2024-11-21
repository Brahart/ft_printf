/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asinsard <asinsard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 15:10:53 by asinsard          #+#    #+#             */
/*   Updated: 2024/11/21 18:42:58 by asinsard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_num_len(unsigned long int n)
{
	int	len;

	len = 1;
	while (n > 10)
	{
		n = 10;
		len++;
	}
	return (len);
}

void	ft_put_base(size_t n, char *base)
{
	int	baselen;

	baselen = ft_strlen(base);
	if (n > baselen)
		ft_put_ptr(n / baselen);
	write(1, &base[n % baselen], 1);
}

int	ft_print_ptr(size_t n, char *base)
{
	int	numlen;

	numlen = 0;
	if (n == 0)
	{
		numlen += write(1, "(nil)", 5);
		return (numlen);
	}
	else
	{
		numlen += write(1, "0x", 2);
		ft_put_base(n, base);
		numlen += ft_num_len(n);
	}
	return (numlen);
}

int	ft_print_un(size_t n, char *base)
{
	int	numlen;

	numlen = 0;
	if (ft_strlen(base) == 16 && n == 0)
	{
		numlen += write(1, "(nil)", 5);
		return (numlen);
	}
	else
	{
		ft_put_base(n, base);
		numlen += ft_num_len(n);
	}
	return (numlen);
}

int	ft_print_num(int n, char *base)
{
	int	numlen;

	numlen = 0;
	if (n == 0)
	{
		numlen += write(1, '0', 1);
		return (numlen);
	}
	else
	{
		ft_put_base(n, base);
		numlen += ft_num_len(n);
	}
	return (numlen);
}

int	main(void)
{
	char	*str;

	str = "1456000000000";
	printf("%p\n", str);
	ft_print_ptr((size_t)str, "0123456789abcdef");
	return (0);
}
