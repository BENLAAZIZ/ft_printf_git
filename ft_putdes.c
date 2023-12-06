/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdes.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 15:11:38 by hben-laz          #+#    #+#             */
/*   Updated: 2023/12/06 15:55:15 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int ft_nlen (long n)
{
	int len = 0;
	if (n == 0)
		len += 1;
	if (n < 0)
	{
		n = n * -1;
		len++;
	}
		
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return len;
}
int	ft_putdes(long n)
{
	int len = ft_nlen (n);
	if (n == -2147483648)
		ft_putstr("-2147483648");
	else if (n < 0)
	{
		ft_putchar('-');
		ft_putdes(-n);
	}
	else if (n >= 0 && n <= 9)
		ft_putchar(n + '0');
	else
	{
		ft_putdes((n / 10));
		ft_putchar((n % 10) + '0');
	}
	return (len);
}
// #include <stdio.h>

// int main ()
// {
// 	int i = ft_putdes(-12345);
// 	printf("\n%d", i);
// }
