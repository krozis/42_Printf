/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stelie <stelie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 00:33:15 by stelie            #+#    #+#             */
/*   Updated: 2020/03/05 10:19:42 by stelie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
	Pour c : le - et le width (* et 15340) fonctionnent. 
	Comportement indefini avec la precision .
*/

static void	ft_write_c_minus(t_obj *obj, va_list ap)
{
	int	i;

	i = 0;
	ft_putchar_fd(va_arg(ap, int), 1);
	obj->printed_c++;
	while (++i < obj->width)
	{
		ft_putchar_fd(' ', 1);
		obj->printed_c++;
	}
}

static void	ft_write_c_no_minus(t_obj *obj, va_list ap)
{
	int	i;

	i = 0;
	while (++i < obj->width)
	{
		ft_putchar_fd(' ', 1);
		obj->printed_c++;
	}
	ft_putchar_fd(va_arg(ap, int), 1);
	obj->printed_c++;
}

void		ft_write_c(t_obj *obj, va_list ap)
{
	int		i;

	i = 0;
	if (obj->width > 0 && !obj->prec && obj->flag[MINUS])
		ft_write_c_minus(obj, ap);
	else if (obj->width > 0 && !obj->prec && !(obj->flag[MINUS]))
		ft_write_c_no_minus(obj, ap);
	else
	{
		ft_putchar_fd(va_arg(ap, int), 1);
		obj->printed_c++;
	}
	ft_pf_clean_specs(obj);
}
