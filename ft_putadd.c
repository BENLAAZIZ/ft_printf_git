/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 12:01:53 by hben-laz          #+#    #+#             */
/*   Updated: 2023/12/08 12:10:05 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_lenn(unsigned long n)
{
	int	len;

	len = 0;
	if (n == 0)
		len += 1;
	while (n > 0)
	{
		n = n / 16;
		len++;
	}
	return (len);
}

static void	ft_puthe(unsigned long n)
{
	unsigned long	remainder;
	int				len;

	len = ft_lenn(n);
	if (n / 16 > 0)
		ft_puthe(n / 16);
	remainder = n % 16;
	if (remainder < 10)
		ft_putchar('0' + remainder);
	else
		ft_putchar('a' + remainder - 10);
}

int	ft_putadd(void *p)
{
	unsigned long	n;
	int				len;

	n = (unsigned long)p;
	len = 0;
	len = ft_lenn(n);
	ft_putstr("0x");
	ft_puthe(n);
	return (len + 2);
}
