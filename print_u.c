/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shibarin <shibarin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:21:21 by shibarin          #+#    #+#             */
/*   Updated: 2023/10/09 18:14:10 by shibarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	rec_num(size_t num, int len)
{
	char	c;

	if (num >= 10)
	{
		rec_num(num / 10, len);
		c = num % 10 + '0';
		len++;
		write(1, &c, 1);
		num /= 10;
	}
	c = num % 10 + '0';
	len += 1;
	write(1, &c, 1);
	return (len);
}

int	print_u(va_list ap)
{
	unsigned int	num;
	int				len;

	len = 0;
	num = va_arg(ap, unsigned int);
	len = rec_num(num, len);
	return (len);
}
