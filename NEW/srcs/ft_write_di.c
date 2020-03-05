/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_di.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stelie <stelie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 13:48:45 by stelie            #+#    #+#             */
/*   Updated: 2020/03/05 14:33:05 by stelie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_write_di(t_obj *obj, va_list ap)
{
	if (obj->flag[MINUS] && obj->flag[ZERO])
		obj->flag[ZERO] = 0;
	if (obj->prec < 0)
		obj->prec = 0;
	
	if (!obj->flag[MINUS] && !obj->flag[ZERO] && !obj->prec && !obj->width)
	{
		/* code */
	}
	
	
}