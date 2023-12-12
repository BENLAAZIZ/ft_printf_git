/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 16:22:02 by hben-laz          #+#    #+#             */
/*   Updated: 2023/12/12 22:38:56 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int n, char x)
{
	int	remainder;
	int	c;

	c = 0;
	if (n / 16 > 0)
		c += ft_puthex(n / 16, x);
	remainder = n % 16;
	if (remainder < 10)
		c += ft_putchar('0' + remainder);
	else if (x == 'x')
		c += ft_putchar('a' + remainder - 10);
	else if (x == 'X')
		c += ft_putchar('A' + remainder - 10);
	return (c);
}
//0123456789abcdef
//0123456789ABCDEF
int	ft_puthex1(unsigned int n, char x)
{
	char *p;
	int i = 0;
	if(x = 'x')
		p = "0123456789abcdef";
	else if(x = 'X')
	    p = "0123456789ABCDEF";
	
	if(n >= 16)
		i += ft_puthex1(n/16, x);
	i += ft_putchar(p[n%16]);
	return (i);
}
//char **ft_split(char *s)
