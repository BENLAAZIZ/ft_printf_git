/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 17:58:12 by hben-laz          #+#    #+#             */
/*   Updated: 2023/12/11 13:32:29 by hben-laz         ###   ########.fr       */
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
		return (ft_putstr("(null)"));
	while (str[i])
	{
		count += ft_putchar(str[i]);
		i++;
	}
	return (count);
}
