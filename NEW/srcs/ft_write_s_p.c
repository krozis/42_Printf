/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_s_p.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stelie <stelie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 11:25:40 by stelie            #+#    #+#             */
/*   Updated: 2020/03/05 11:45:27 by stelie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_write_s_p(t_obj *obj, char *str)
{
	while (*str && *str != '\0' && obj->prec)
	{
		ft_putchar_fd(*str, 1);
		str++;
		obj->printed_c++;
		obj->prec--;
	}
}
