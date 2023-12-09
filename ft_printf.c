/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 19:09:07 by hben-laz          #+#    #+#             */
/*   Updated: 2023/12/09 19:58:13 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	chek_format(const char *format, va_list argptr, int i)
{
	int	c;

	c = 0;
	if (format[i] == '%')
		c += (ft_putchar('%'));
	else if (format[i] == 's')
		c += (ft_putstr(va_arg(argptr, char *)));
	else if (format[i] == 'c')
		c += (ft_putchar(va_arg(argptr, int)));
	else if (format[i] == 'd' || format[i] == 'i')
		c += (ft_putdes(va_arg(argptr, int)));
	else if (format[i] == 'x' || format[i] == 'X')
		c += (ft_puthex(va_arg(argptr, int), format[i]));
	else if (format[i] == 'u')
		c += (ft_put_unsigned_des(va_arg(argptr, int)));
	else if (format[i] == 'p')
		c += (ft_putadd(va_arg(argptr, void *)));
	else
		c += ft_putchar(format[i]);
	return (c);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		count;
	va_list	argptr;

	i = 0;
	count = 0;
	va_start(argptr, format);
	if (write(1, "", 0) == -1)
		return (-1);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
				break ;
			count = count + chek_format(format, argptr, i);
		}
		else
			count += ft_putchar(format[i]);
		i++;
	}
	va_end(argptr);
	return (count);
}
// int main()
// {
// 	ft_printf("my name is %s i am %d ", "hamza", 15);
// 	return (0);
// }