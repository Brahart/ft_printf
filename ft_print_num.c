/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asinsard <asinsard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 15:10:53 by asinsard          #+#    #+#             */
/*   Updated: 2024/11/21 21:53:27 by asinsard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_num_len(long long int n)
{
	int	len;

	len = 1;
	if (n < 0)
		n *= -1;
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
		ft_put_base(n / baselen, base);
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

int	ft_print_un(unsigned int n, char *base)
{
	int	numlen;

	numlen = 0;
	ft_put_base(n, base);
	numlen += ft_num_len(n);
	return (numlen);
}

int	ft_print_int(int n, char *base)
{
	int	numlen;

	numlen = 0;
	if (n < 0)
	{
		write(1, "-", 1);
		numlen += 1;
		n *= -1;
	}
	ft_put_base(n, base);
	numlen += ft_num_len(n);
	return (numlen);
}


/*int	main(void)
{
	char			*str;
	unsigned int	n;

	str = "1456000000000";
	n = -654;
	printf("%x\n", n);
	ft_print_un(n, "0123456789abcdef");
	return (0);
}*/

