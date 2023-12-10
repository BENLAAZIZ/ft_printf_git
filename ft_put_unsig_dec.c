/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsig_dec.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 22:23:01 by hben-laz          #+#    #+#             */
/*   Updated: 2023/12/10 22:32:09 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "ft_printf.h"

int	ft_put_unsig_dec(unsigned int n)
{
	int	c;

	c = 0;
	if (n >= 0 && n <= 9)
		c += ft_putchar(n + 48);
	else
	{
		c += ft_putdec(n / 10);
		c += ft_putchar((n % 10) + 48);
	}
	return (c);
}
