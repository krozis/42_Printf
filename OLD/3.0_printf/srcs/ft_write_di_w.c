/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_di_w.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stelie <stelie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 15:27:20 by stelie            #+#    #+#             */
/*   Updated: 2020/03/12 17:47:17 by stelie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_write_di_w_z(t_obj *obj, va_list ap)
{
	char	*str;
	int		i;
	t_bool	neg;
	int		arg;

	arg = va_arg(ap, int);
	neg = arg < 0 ? TRUE : FALSE;
	i = 0;
	str = neg ? ft_itoa(-arg) : ft_itoa(arg);
	if (neg)
	{
		ft_pf_putchar_count(obj, '-');
		obj->width--;
	}
	while (ft_strlen(str) < obj->width)
	{
		ft_putchar_fd('0', 1);
		obj->width--;
		obj->printed_c++;
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

char	*ft_write_di_w_min(t_obj *obj, va_list ap)
{
	char	*str;
	int		i;

	i = 0;
	str = ft_itoa(va_arg(ap, int));
	while (str[i] && str[i] != '\0')
	{
		ft_putchar_fd(str[i], 1);
		i++;
		obj->printed_c++;
	}
	while (ft_strlen(str) < obj->width)
	{
		ft_putchar_fd(' ', 1);
		obj->printed_c++;
		obj->width--;
	}
	return (str);
}

/*
char	*ft_write_di_w(t_obj *obj, va_list ap)
{
	char	*str;

	{
		return (ft_write_di_w_simple(obj, ap));
	}
	return ("");
}
*/