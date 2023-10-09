/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shibarin <shibarin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:12:04 by shibarin          #+#    #+#             */
/*   Updated: 2023/10/09 18:14:54 by shibarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	print_c(va_list ap);
int		print_d(va_list ap);
int		to_large_hex(unsigned int tmp, int len);
int	print_large_x(va_list ap);
int		print_p(va_list ap);
int		print_s(va_list ap);
int		print_u(va_list ap);
int		print_x(va_list ap);
int		to_hex(unsigned int tmp, int len);
int		print_percent();
int		ft_printf(const char *str, ...);

#endif
