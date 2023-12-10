/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 19:48:47 by hben-laz          #+#    #+#             */
/*   Updated: 2023/12/10 22:09:18 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_hex(unsigned int n, char x)
{
	int a;
	int c = 0;
	
	if (n / 16 > 0)
		c += ft_put_hex(n / 16, x);
	a = n % 16;
	if (a < 10)
		c += ft_putchar(a + 48);
	else if (x == 'x')
		c += ft_putchar('a' + a - 10);
	else if (x == 'X')
		c += ft_putchar('A' + a - 10);
	return (c);
}