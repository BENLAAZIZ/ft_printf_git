/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 17:23:14 by hben-laz          #+#    #+#             */
/*   Updated: 2023/12/10 22:46:13 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_putchar(const char c);
int	ft_putstr(const char *str);
int	ft_putdec(int n);
int	ft_put_hex(unsigned int n, char x);
int	ft_put_unsig_dec(unsigned int n);
int	ft_put_addres(void *p);

#endif
