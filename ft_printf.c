/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 19:09:07 by hben-laz          #+#    #+#             */
/*   Updated: 2023/12/06 14:54:51 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "header.h"
#include <stdarg.h>

// format = "hamza %d %s" , 1 , "man";

int	ft_printf(const char *format , ...)
{
	int i = 0;
	va_list argPtr;
	va_start(argPtr,format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if(format[i + 1] == '%')
				ft_putchar('%');
			else if (format[i + 1] == 's')
				ft_putstr(va_arg(argPtr, char *));
			else if (format[i + 1] == 'c')
				ft_putchar(va_arg(argPtr, char));
			else if (format[i + 1] == 'd')
				ft_putdes(va_arg(argPtr, int));
			else if (format[i + 1] == 'x')
				ft_putexa(va_arg(argPtr, int));
		}
		i++;
	}
	
	va_end(argPtr);

}

int main()
{
	ft_printf(3,  5, 12 ,8);
	printf("\t%s",  "hamza");
}