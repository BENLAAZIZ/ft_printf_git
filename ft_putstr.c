/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 17:58:12 by hben-laz          #+#    #+#             */
/*   Updated: 2023/12/10 21:30:44 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_putstr(const char *str)
{
	int	i;
	int count;
	
	i = 0;
	count = 0;
	if (str == NULL)
		return (0);
	while (str[i])
	{
		count += ft_putchar(str[i]);
		i++;
	}
	return (count);
}
