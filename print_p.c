/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shibarin <shibarin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 14:31:49 by shibarin          #+#    #+#             */
/*   Updated: 2023/10/09 18:49:12 by shibarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// tmpでもらった10進数の数を16進数に直して出力する

int	print_p(va_list ap)
{
	unsigned long	tmp;
	int				len;

	len = 2;
	write(1, "0x", 2);
	tmp = va_arg(ap, unsigned long);
	len = to_hex(tmp, len);
	return (len);
}
