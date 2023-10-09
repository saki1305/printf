/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shibarin <shibarin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 18:28:17 by shibarin          #+#    #+#             */
/*   Updated: 2023/10/09 18:32:52 by shibarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_s(va_list ap)
{
	char	*s;
	int len;

	len = 0;
	s = va_arg(ap, char *);
	if (!s)
	{
		write(1, "(null)", 6);
		return 6;
	}
	while (s[len])
		len++;
	write(1, s, len);
	return len;
}
