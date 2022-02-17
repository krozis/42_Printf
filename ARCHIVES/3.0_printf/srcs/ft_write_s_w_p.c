/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_s_w_p.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stelie <stelie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 11:46:20 by stelie            #+#    #+#             */
/*   Updated: 2020/03/05 13:46:50 by stelie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_write_s_w_p_minus(t_obj *obj, char *str)
{
	int	len;
	int	tmp;

	len = ft_strlen(str);
	if (len >= obj->prec)
	{
		len = (len - (len - obj->prec));
	}
	tmp = len;
	while (len)
	{
		ft_putchar_fd(*str, 1);
		obj->printed_c++;
		str++;
		len--;
	}
	while (tmp <obj->width)
	{
		ft_putchar_fd(' ', 1);
		obj->printed_c++;
		obj->width--;
	}
}

void		ft_write_s_w_p(t_obj *obj, char *str)
{
	int	len;

	len = ft_strlen(str);
	if (len >= obj->prec)
	{
		len = (len - (len - obj->prec));
		while (len <obj->width)
		{
			ft_putchar_fd(' ', 1);
			obj->printed_c++;
			obj->width--;
		}
		while (len)
		{
			ft_putchar_fd(*str, 1);
			obj->printed_c++;
			str++;
			len--;
		}
	}
	else
		ft_write_s_w(obj, str);
}
