/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asinsard <asinsard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 17:27:02 by asinsard          #+#    #+#             */
/*   Updated: 2024/11/21 21:09:11 by asinsard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_strlen(char	*s)
{
	int	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
	return (ft_strlen(str));
}


/*int	main(void)
{
	printf("%d", ft_putstr("feqfw\n"));
	return (1);
}*/