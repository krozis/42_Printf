/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_di_w.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stelie <stelie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 15:27:20 by stelie            #+#    #+#             */
/*   Updated: 2020/03/05 15:40:32 by stelie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_write_di_w_simple(t_obj *obj, va_list ap)
{
	char	*str;
	int		i;

	i = 0;
	str = ft_itoa(va_arg(ap, int));
	if (ft_strlen(str) < obj->width)
	{
		while (ft_strlen(str) < obj->width)
		{
			ft_putchar_fd(' ', 1);
			obj->width--;
			obj->printed_c++;
		}
	}
	while (str[i] && str[i] != '\0')
	{
		ft_putchar_fd(str[i], 1);
		i++;
		obj->printed_c++;
	}
	return (str);
}

char	*ft_write_di_w(t_obj *obj, va_list ap)
{
	char	*str;

	if (obj->flag[ZERO] || obj->flag[MINUS])
		;
	else
	{
		return (ft_write_di_w_simple(obj, ap));
	}
	return ("");
}
