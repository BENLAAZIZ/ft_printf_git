/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned_des.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 17:44:18 by hben-laz          #+#    #+#             */
/*   Updated: 2023/12/10 22:54:02 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_unsigned_des(unsigned int n)
{
	int	c;

	c = 0;
	if (n >= 0 && n <= 9)
		c += ft_putchar(n + '0');
	else
	{
		c += ft_put_decimal((n / 10));
		c += ft_putchar((n % 10) + '0');
	}
	return (c);
}
