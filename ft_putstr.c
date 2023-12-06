/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 15:05:35 by hben-laz          #+#    #+#             */
/*   Updated: 2023/12/06 15:46:42 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_putstr(char *s)
{
	int	i;
	int c;

	i = 0;
	i = 0;
	while (s[i] != '\0')
	{
		c = c + ft_putchar(s[i]);
		i++;
	}
	return (c);
}
