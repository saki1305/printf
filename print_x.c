/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_x.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shibarin <shibarin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 15:09:26 by shibarin          #+#    #+#             */
/*   Updated: 2023/10/09 18:14:13 by shibarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_x(va_list ap)
{
	unsigned int	tmp;
	int				len;

	len = 0;
	tmp = va_arg(ap, unsigned int);
	len = to_hex(tmp, len);
	return (len);
}
