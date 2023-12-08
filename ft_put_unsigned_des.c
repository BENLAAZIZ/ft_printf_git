/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned_des.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 17:44:18 by hben-laz          #+#    #+#             */
/*   Updated: 2023/12/08 12:01:15 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_nlen(long n)
{
	int	len;

	len = 0;
	if (n == 0)
		len += 1;
	if (n < 0)
	{
		n = n * (-1);
		len++;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

int	ft_put_unsigned_des(unsigned int n)
{
	int	len;

	len = ft_nlen (n);
	if (n >= 0 && n <= 9)
		ft_putchar(n + '0');
	else
	{
		ft_putdes((n / 10));
		ft_putchar((n % 10) + '0');
	}
	return (len);
}
