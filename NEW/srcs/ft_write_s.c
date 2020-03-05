/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stelie <stelie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 00:47:35 by stelie            #+#    #+#             */
/*   Updated: 2020/03/05 01:25:12 by stelie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_write_s(t_obj *obj, va_list ap)
{
	char	*str;

	str = va_arg(ap, char *);
	while (*str && *str != '\0')
	{
		ft_putchar_fd(*str, 1);
		str++;
		obj->printed_c++;
	}
	ft_pf_clean_specs(obj);
}
