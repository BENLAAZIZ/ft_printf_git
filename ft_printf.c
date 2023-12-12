/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 19:09:07 by hben-laz          #+#    #+#             */
/*   Updated: 2023/12/12 12:19:06 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	chek_fmt(const char *fmt, va_list argptr, int i)
{
	int	c;

	c = 0;
	if (fmt[i] == '%')
		c += ft_putchar('%');
	else if (fmt[i] == 's')
		c += (ft_putstr(va_arg(argptr, char *)));
	else if (fmt[i] == 'c')
		c += ft_putchar(va_arg(argptr, int));
	else if (fmt[i] == 'd' || fmt[i] == 'i')
		c += ft_put_decimal(va_arg(argptr, int));
	else if (fmt[i] == 'x' || fmt[i] == 'X')
		c += ft_puthex(va_arg(argptr, unsigned int), fmt[i]);
	else if (fmt[i] == 'u')
		c += ft_put_unsigned_des(va_arg(argptr, unsigned int));
	else if (fmt[i] == 'p')
		c += ft_putadd(va_arg(argptr, void *));
	else
		c += ft_putchar(fmt[i]);
	return (c);
}

int	ft_printf(const char *fmt, ...)
{
	int		i;
	int		count;
	va_list	argptr;

	i = 0;
	count = 0;
	va_start(argptr, fmt);
	if (write(1, "", 0) == -1)
		return (-1);
	while (fmt[i])
	{
		if (fmt[i] == '%')
		{
			i++;
			if (fmt[i] == '\0')
				break ;
			count = count + chek_fmt(fmt, argptr, i);
		}
		else
			count += ft_putchar(fmt[i]);
		i++;
	}
	va_end(argptr);
	return (count);
}