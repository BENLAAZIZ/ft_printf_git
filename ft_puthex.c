/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 16:22:02 by hben-laz          #+#    #+#             */
/*   Updated: 2023/12/06 22:13:37 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int ft_len (unsigned int n)
{
	int len = 0;
	if (n == 0)
		len += 1;
	while (n > 0)
	{
		n = n / 16;
		len++;
	}
	return len;
}

int	ft_puthex(unsigned int n, char x)
{
	int	remainder;
	int len;

	len = ft_len (n);

    if (n / 16 > 0)
        ft_puthex(n / 16, x);
	remainder = n % 16;
    if (remainder < 10)
        ft_putchar('0' + remainder);
    else if (x == 'x')
        ft_putchar('a' + remainder - 10);
	else if (x == 'X')
        ft_putchar('A' + remainder - 10);
	return (len);
}
// int main()
// {
// 	int a = ft_puthex(13, 'X');
// }