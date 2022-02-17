/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_tools.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stelie <stelie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 12:02:37 by stelie            #+#    #+#             */
/*   Updated: 2020/02/11 12:08:22 by stelie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		count_conv(const char *str)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			while (str[i] && str[i] == ' ')
				i++;
			if (str[i] && str[i] == '%')
				i++;
			else
				count++;
		}
		i++;
	}
	return (count);
}
