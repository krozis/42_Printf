/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_percent.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stelie <stelie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 14:54:09 by stelie            #+#    #+#             */
/*   Updated: 2020/03/04 15:07:07 by stelie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_bool	ft_parse_percent(t_obj *obj)
{
	if (obj->str[obj->idx] == '%')
	{
		ft_putchar_fd('%', 1);
		obj->printed_c++;
		return (TRUE);
	}
	return (FALSE);
}