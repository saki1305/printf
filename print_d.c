/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_d.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shibarin <shibarin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 14:20:37 by shibarin          #+#    #+#             */
/*   Updated: 2023/10/09 18:13:52 by shibarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	recursive(long long nbr, int len)
{
	char	c;

	if (nbr < 0)
	{
		write(1, "-", 1);
        len++;
		nbr *= -1;
	}
	if (nbr > 0)
	{
		recursive(nbr / 10, len);
		c = nbr % 10 + '0';
		write(1, &c, 1);
        len++;
	}
    return len;
}

int print_d(va_list ap)
{
    int len;
    int num;
    long long tmp;
    //マイナスの出力するときにlong long型に直したい
    num = va_arg(ap, int);
    tmp = (long long)num;
    if (tmp == 0)
    {
        write(1, "0", 1);
        return 1;
    }
    len = 0;
    len += recursive(tmp, len);
    return len;
}