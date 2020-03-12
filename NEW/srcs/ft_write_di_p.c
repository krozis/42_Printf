/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_di_p.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stelie <stelie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 17:35:40 by stelie            #+#    #+#             */
/*   Updated: 2020/03/12 19:19:09 by stelie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


static int	ft_width_print2(t_obj *obj, char *str, t_bool neg)
{
	int	nb;
	int	wtp;

	nb = ft_strlen(str);
	wtp = 0;
	while (obj->width > (ft_max(obj->prec, nb) + (neg ? 1 : 0)))
	{
		wtp++;
		obj->width--;
	}
	return (wtp);
}

static void	ft_width_print(t_obj *obj, char *str, t_bool neg)
{
	int	nb;

	nb = ft_strlen(str);

	if (obj->prec < nb)
			while (obj->width > nb + (neg ? 1 : 0))
			{
				ft_pf_putchar_count(obj, ' ');
				obj->width--;
			}
	else
		while (obj->width > nb + (obj->prec - nb) + (neg ? 1 : 0))
		{
			ft_pf_putchar_count(obj, ' ');
			obj->width--;
		}
}

char		*ft_write_di_p(t_obj *obj, va_list ap)
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

char		*ft_write_di_pw(t_obj *obj, va_list ap)
{
	char	*str;
	int		i;
	t_bool	neg;
	int		arg;

	arg = va_arg(ap, int);
	neg = arg < 0 ? TRUE : FALSE;
	i = 0;
	str = neg ? ft_itoa(-arg) : ft_itoa(arg);
	ft_width_print(obj, str, neg);
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

char		*ft_write_di_pw_min(t_obj *obj, va_list ap)
{
	char	*str;
	int		i;
	t_bool	neg;
	int		arg;
	int		wtp;

	arg = va_arg(ap, int);
	neg = arg < 0 ? TRUE : FALSE;
	i = 0;
	str = neg ? ft_itoa(-arg) : ft_itoa(arg);
	wtp = ft_width_print2(obj, str, neg);
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
	while (wtp > 0)
	{
		ft_pf_putchar_count(obj, ' ');
		wtp--;
	}
	return (str);
}