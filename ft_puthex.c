/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 16:22:02 by hben-laz          #+#    #+#             */
/*   Updated: 2023/12/06 17:32:42 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"


int ft_len (long n)
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

int	ft_puthex(int n, char x)
{
	int	remainder;
	int len;

	len = ft_len (n);
    if (n < 0)
    {
        ft_putchar('-');
        n = -n;
    }
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