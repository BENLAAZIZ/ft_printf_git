/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 19:09:07 by hben-laz          #+#    #+#             */
/*   Updated: 2023/12/06 16:02:02 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "header.h"

// format = "hamza %d %s" , 1 , "man";

int	ft_printf(const char *format , ...)
{
	int i;
	int count;
	
	i = 0;
	count = 0;
	va_list argPtr;
	va_start(argPtr, format);
	
	while (format[i])
	{
		if (format[i] == '%')
		{
			if(format[i + 1] == '%')
				count = count + ft_putchar('%');
			else if (format[i + 1] == 's')
				count = count + ft_putstr(va_arg(argPtr, char *));
			else if (format[i + 1] == 'c')
				count = count + ft_putchar(va_arg(argPtr, int));
			else if (format[i + 1] == 'd' || format[i + 1] == 'i')
				count = count + ft_putdes(va_arg(argPtr, int));
				i++;
		}
		else
		{
			ft_putchar(format[i]);
			count = count + 1;
		}
		i++;
	}
	va_end(argPtr);
	return (count);
}
#include <stdio.h>
int main()
{
	ft_printf("%d\t%s", 12345, "hamza");
	//ft_printf("hamza");
	
}