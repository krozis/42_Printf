/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_write.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stelie <stelie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 00:12:39 by stelie            #+#    #+#             */
/*   Updated: 2020/03/05 01:26:03 by stelie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_pf_clean_specs(t_obj *obj)
{
	obj->flag[0] = 0;
	obj->flag[1] = 0;
	obj->flag[1] = 0;
	obj->flag[1] = 0;
	obj->flag[1] = 0;
	obj->min_len = 0;
	obj->max_len = 0;
	obj->size = 0;
	obj->conv = 0;	
}

void	ft_pf_write(t_obj *obj, va_list ap)
{
	if (obj->conv == 'c')
		ft_write_c(obj, ap);
	else if (obj->conv == 's')
		ft_write_s(obj, ap);
/*	else if (obj->conv == 'p')
		ft_write_p(obj, ap);
	else if (obj->conv == 'd' || obj->conv == 'i')
		ft_write_di(obj, ap);
	else if (obj->conv == 'u')
		ft_write_u(obj, ap);
	else if (obj->conv == 'x')
		ft_write_x(obj, ap, 'x');
	else if (obj->conv == 'X')
		ft_write_p(obj, ap, 'X');
*/
}
