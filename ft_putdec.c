/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdec.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 18:07:36 by hben-laz          #+#    #+#             */
/*   Updated: 2023/12/10 18:34:25 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putdec(int n)
{
    int c = 0;

    if (n == -2147483648)
        return ft_putstr("-2147483648");
    if (n < 0)
    {
        c += ft_putchar('-');
        n = -n; // Take the absolute value
    }
    if (n >= 10)
        c += ft_putdec(n / 10);
    c += ft_putchar((n % 10) + '0'); // Use '0' instead of 48
    return c;
}

#include <stdio.h>
int main()
{
	int a = ft_putdec(0);
	

	printf("\n%d", a);
}
