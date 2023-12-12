/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_decimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 18:44:52 by hben-laz          #+#    #+#             */
/*   Updated: 2023/12/11 17:18:43 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_decimal(int n)
{
	int	c;

	c = 0;
	if (n == -2147483648)
		return (ft_putstr("-2147483648"));
	if (n < 0)
	{
		c += ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
		c += ft_put_decimal(n / 10);
	c += ft_putchar((n % 10) + '0');
	return (c);
}
