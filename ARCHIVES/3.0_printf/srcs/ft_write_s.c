/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stelie <stelie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 00:47:35 by stelie            #+#    #+#             */
/*   Updated: 2020/03/05 12:35:01 by stelie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
	Pour s : le -, la precision . et le width (* et 15340) fonctionnent.
*/

void	ft_write_s(t_obj *obj, va_list ap)
{
	char	*str;

	str = va_arg(ap, char *);
	if (obj->width && !obj->prec && !obj->flag[MINUS])
		ft_write_s_w(obj, str);
	else if (obj->width && !obj->prec && obj->flag[MINUS])
		ft_write_s_w_minus(obj, str);
	else if (!obj->width && obj->prec)
		ft_write_s_p(obj, str);
	else if (obj->width && obj->prec && !obj->flag[MINUS])
		ft_write_s_w_p(obj, str); 
	else if (obj->width && obj->prec && obj->flag[MINUS])
		ft_write_s_w_p_minus(obj, str);
	else
	{
		while (*str && *str != '\0')
		{
			ft_putchar_fd(*str, 1);
			str++;
			obj->printed_c++;
		}
	}
	ft_pf_clean_specs(obj);
}
