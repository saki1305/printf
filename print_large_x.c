/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_large_x.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shibarin <shibarin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 15:14:39 by shibarin          #+#    #+#             */
/*   Updated: 2023/10/09 18:13:57 by shibarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	 to_large_hex(unsigned int tmp, int len)
{
	char c;
	if (tmp >= 16)
	{
		to_large_hex(tmp / 16, len);
		if (tmp % 16 > 9)
			c = tmp % 16 - 10 + 'a';
		else
			c = tmp % 16 + '0';
		len++;
		write(1, &c, 1);
		tmp /= 16;
	}
	if (tmp % 16 > 9)
		c = tmp % 16 - 10 + 'A';
	else
		c = tmp % 16 + '0';
	len++;
	write(1, &c, 1);
	return (len);
}

int	print_large_x(va_list ap)
{
	unsigned int	tmp;
	int				len;

	len = 0;
	tmp = va_arg(ap, unsigned int);
	len = to_large_hex(tmp, len);
	return (len);
}
