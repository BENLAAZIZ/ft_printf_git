/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 11:53:39 by hben-laz          #+#    #+#             */
/*   Updated: 2023/12/11 18:31:29 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *fmt, ...);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_put_decimal(int n);
int	ft_puthex(unsigned int n, char x);
int	ft_put_unsigned_des(unsigned int n);
int	ft_putadd(void *p);	

#endif
