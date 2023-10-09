/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shibarin <shibarin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 15:33:33 by shibarin          #+#    #+#             */
/*   Updated: 2023/10/09 19:02:57 by shibarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
//unsigned longに直さないといけないよー

int	 to_hex(unsigned int tmp, int len)
{
	char c;
	
	if (tmp >= 16)
	{
		to_hex(tmp / 16, len);
		if (tmp % 16 > 9)
			c = tmp % 16 - 10 + 'a';
		else
			c = tmp % 16 + '0';
		len++;
		write(1, &c, 1);
		tmp /= 16;
	}
	if (tmp % 16 > 9)
		c = tmp % 16 - 10 + 'a';
	else
		c = tmp % 16 + '0';
	len++;
	write(1, &c, 1);
	return (len);
}

// "0123456789abcdef"[tmp % 16];