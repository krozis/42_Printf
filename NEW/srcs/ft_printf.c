/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stelie <stelie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 14:44:43 by stelie            #+#    #+#             */
/*   Updated: 2020/03/05 09:54:14 by stelie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_pf_read(t_obj *obj, va_list ap)
{
	while (obj->str[obj->idx] != '\0')
	{
		if (obj->str[obj->idx] == '%')
		{
			obj->idx++;
			obj->ret = ft_parse(obj, ap);
			if (obj->ret == TRUE)
				ft_pf_write(obj, ap);
		}
		else
		{
			ft_putchar_fd(obj->str[obj->idx], 1);
			obj->printed_c++;
			obj->idx++;
		}
	}
}

int			ft_printf(const char *str, ...)
{
	size_t	res;
	t_obj	obj;
	va_list	ap;

	res = 0;
	if (!str)
		return (ERROR);
	ft_bzero(&obj, sizeof(t_obj));
	obj.str = str;
	va_start(ap, str);
	ft_pf_read(&obj, ap);
	res = obj.printed_c;
	va_end(ap);
	ft_bzero(&obj, sizeof(t_obj));
	return (res);
}
