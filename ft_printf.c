/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shibarin <shibarin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:13:52 by shibarin          #+#    #+#             */
/*   Updated: 2023/10/09 18:29:20 by shibarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// 全てをまずはchar *resultに入れてからwriteすればいいんじゃないか
int ft_printf(const char *str, ...)
{
    va_list ap;
    va_start(ap, str);
    int len;
    
    len = 0;
    va_start(ap, str);
//lenで文字数カウントしないといけないらしい
    while (*str)
    {
        if (*str == '%')
        {
            str++;
            while (*str == ' ')
                str++;
            if (*str == 'c')
                len += print_c(ap);
            else if (*str == 's')
                len += print_s(ap);
            else if (*str == 'p')
                len += print_p(ap);
            else if (*str == 'd' || *str == 'i')
                len += print_d(ap);
            else if (*str == 'u')
                len += print_u(ap);
            else if (*str == 'x')
                len += print_x(ap);
            else if (*str == 'X')
                len += print_large_x(ap);
            else if (*str == '%')
                len += print_percent();
            str++;
        }
        else{
            write(1, str, 1);
            str++;
            len++;    
        }
    }
    va_end(ap);
    return len;
}
