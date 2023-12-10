/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 17:17:44 by hben-laz          #+#    #+#             */
/*   Updated: 2023/12/10 18:07:21 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int	i;
	int	count;
	va_list	ptr;

	i = 0;
	count = 0;
	va_start(ptr, format);
	if (write(1, "", 0) == -1)
		return (-1);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
				count += ft_putchar('%');
			else if (format[i] == 'c')
				count += ft_putchar(va_arg(ptr, int));
			else if (format[i] == 's')
				count += ft_putstr(va_arg(ptr, char *));
			else if (format[i] == 'd')
				count += ft_putdec(va_arg(ptr, int));
		}
	}
	
}