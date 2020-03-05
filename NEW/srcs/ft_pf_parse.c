/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_parse.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stelie <stelie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 14:49:42 by stelie            #+#    #+#             */
/*   Updated: 2020/03/05 13:25:51 by stelie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static t_bool	ft_parse_percent(t_obj *obj)
{
	if (obj->str[obj->idx] == '%')
	{
		ft_putchar_fd('%', 1);
		obj->printed_c++;
		return (TRUE);
	}
	return (FALSE);
}

static void		ft_parse_conv(t_obj *obj)
{
	if (ft_in_charset(CONVSET, obj->str[obj->idx]))
	{
		obj->conv = obj->str[obj->idx];
		obj->idx++;
	}
}

t_bool			ft_parse(t_obj *obj, va_list ap)
{
	if (ft_parse_percent(obj) || obj->str[obj->idx] == '\0')
		return (FALSE);
	while (obj->str[obj->idx] != '\0' && (ft_isdigit(obj->str[obj->idx]) ||
			ft_in_charset(SPECIFIERS, obj->str[obj->idx])))
		ft_parse_specifier(obj, ap);
	ft_parse_conv(obj);
	return (TRUE);
}
