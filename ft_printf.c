/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 19:09:07 by hben-laz          #+#    #+#             */
/*   Updated: 2023/12/06 22:37:49 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

// format = "hamza %d %s" , 1 , "man";


int	ft_printf(const char *format , ...)
{
	int i;
	int count;
	
	i = 0;
	count = 0;
	va_list argptr;
	va_start(argptr, format);
	if (write(1, "", 0) == -1)
		return -1;
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				break;
			if(format[i + 1] == '%')
				count = count + ft_putchar('%');
			else if (format[i + 1] == 's')
				count = count + ft_putstr(va_arg(argptr, char *));
			else if (format[i + 1] == 'c')
				count = count + ft_putchar(va_arg(argptr, int));
			else if (format[i + 1] == 'd' || format[i + 1] == 'i')
				count = count + ft_putdes(va_arg(argptr, int));
			else if (format[i + 1] == 'x' || format[i + 1] == 'X')
				count = count + ft_puthex(va_arg(argptr, int), format[i + 1]);
			else if (format[i + 1] == 'u')
				count = count + ft_put_unsigned_des(va_arg(argptr, int));
			else if (format[i + 1] == 'p')
				count += ft_putadd(va_arg(argptr, void *));
				
			i++;
		}
		else
		{
			ft_putchar(format[i]);
			count = count + 1;
		}
		i++;
	}
	va_end(argptr);
	return (count);
}
// #include <stdio.h>
// int main()
// {
// 	//printf("%");
// 	ft_printf("%");

	
// }