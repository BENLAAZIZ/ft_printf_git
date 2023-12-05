/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 19:09:07 by hben-laz          #+#    #+#             */
/*   Updated: 2023/12/05 12:47:53 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "header.h"
#include <stdarg.h>
#include <stdio.h>

void	ft_printf(int count, ...)
{
	int i = 1;
	va_list countPtr;
	va_start(countPtr, count);
	while (i < count)
	{
		printf("%d ", va_arg(countPtr, int));
		i++;
	}
	
	printf("%d ", va_arg(countPtr, int));
	
	va_end(countPtr);

}

// int main()
// {
// 	ft_printf(3,  5, 12 ,8);
// 	printf("\t%s",  "hamza");
// }