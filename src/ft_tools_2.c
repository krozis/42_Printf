/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krozis <krozis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:36:23 by krozis            #+#    #+#             */
/*   Updated: 2022/02/17 23:30:18 by krozis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_nbrlen(long nb)
{
	size_t	len;

	len = 0;
	if (nb < 10 && nb > -10)
		return (1);
	while (nb != 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

size_t	ft_hexalen(size_t nb)
{
	size_t	len;

	len = 0;
	if (nb < 16)
		return (1);
	while (nb != 0)
	{
		nb /= 16;
		len++;
	}
	return (len);
}

int	ft_max(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}
