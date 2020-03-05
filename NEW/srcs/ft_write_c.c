/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stelie <stelie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 00:33:15 by stelie            #+#    #+#             */
/*   Updated: 2020/03/05 01:28:34 by stelie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_write_c(t_obj *obj, va_list ap)
{
	int		i;

	i = 0;
	printf("|%i|", obj->min_len);
	if (obj->min_len > 0)
		while (++i < obj->min_len)
		{
			ft_putchar_fd(' ', 1);
			obj->printed_c++;
		}
	ft_putchar_fd(va_arg(ap, int), 1);
	obj->printed_c++;
	ft_pf_clean_specs(obj);
}
