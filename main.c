/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 11:56:58 by hben-laz          #+#    #+#             */
/*   Updated: 2023/12/12 13:09:54 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <stdio.h>
int sum(int n, ...)
{
	int sum,i;

	i = 0;
	sum = 0;
	va_list ptr;
	va_start(ptr, n);
	while (i < n)
	{
		sum += va_arg(ptr, int);
		i++;
	}
	va_end(ptr);
	return (sum);
}
int main()
{
	int a;
	a = 5;
	printf("%d", sum(5, 2, 2, 2, 2, 2));
	return (0);
}