/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_addres.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 22:41:29 by hben-laz          #+#    #+#             */
/*   Updated: 2023/12/11 12:50:30 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"


static int	ft_puthe(unsigned long n)
{
	int c;
	 unsigned long	remainder;

	c = 0;
	if (n / 16 > 0)
		c += ft_puthe(n / 16);
	remainder = n % 16;
	if (remainder < 10)
		c += ft_putchar('0' + remainder);
	else
		c += ft_putchar('a' + remainder - 10);
		return (c);
}

int	ft_put_addres(void *p)
{
	int	c;
	 unsigned long	n;

	c = 0;
	n = ( unsigned long)p;
	ft_putstr("0x");
	c += ft_puthe(n);
	return (c + 2);
}
