/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_c.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shibarin <shibarin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 18:09:53 by shibarin          #+#    #+#             */
/*   Updated: 2023/10/09 18:13:47 by shibarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// void	print_c(const char *str, va_list ap)
int	print_c(va_list ap)
{
	int	c;

	c = va_arg(ap, int);
	write(1, &c, 1);
	return 1;
}
