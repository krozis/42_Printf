/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_di_p.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stelie <stelie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 17:35:40 by stelie            #+#    #+#             */
/*   Updated: 2020/03/12 17:59:41 by stelie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_write_di_p(t_obj *obj, va_list ap)
{
	char	*str;
	int		i;
	t_bool	neg;
	int		arg;

	arg = va_arg(ap, int);
	neg = arg < 0 ? TRUE : FALSE;
	i = 0;
	str = neg ? ft_itoa(-arg) : ft_itoa(arg);
	if (neg)
		ft_pf_putchar_count(obj, '-');
	while (ft_strlen(str) < obj->prec)
	{
		ft_putchar_fd('0', 1);
		obj->prec--;
		obj->printed_c++;
	}
	while (str[i] && str[i] != '\0')
	{
		ft_pf_putchar_count(obj, str[i]);
		i++;
	}
	return (str);
}