/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_specifier.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stelie <stelie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 13:24:11 by stelie            #+#    #+#             */
/*   Updated: 2020/03/05 13:46:07 by stelie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_parse_prec(t_obj *obj, va_list ap)
{
	obj->idx++;
	if (obj->str[obj->idx] == '*')
	{
		obj->prec = va_arg(ap, int);
		obj->idx++;
	}
	else
	{
		obj->idx++;
		obj->prec = ft_mini_atoi(obj->str + obj->idx);
		while (ft_isdigit(obj->str[obj->idx]) && obj->str[obj->idx] != '\0')
			obj->idx++;
	}
}

static void	ft_parse_size(t_obj *obj, va_list ap)
{
	if (obj->str[obj->idx] == '*')
	{
		obj->width = va_arg(ap, int);
		obj->idx++;
	}
	else
	{
		obj->width = ft_mini_atoi(obj->str + obj->idx);
		while (ft_isdigit(obj->str[obj->idx]) && obj->str[obj->idx] != '\0')
			obj->idx++;
	}
}

static void	ft_parse_flag(t_obj *obj)
{
	if (obj->str[obj->idx] == '-')
		obj->flag[MINUS] = TRUE;
	if (obj->str[obj->idx] == '0')
		obj->flag[ZERO] = TRUE;

/*	PARTIE BONUS
	if (obj->str[obj->idx] == '+')
		obj->flag[PLUS] = TRUE;
	if (obj->str[obj->idx] == ' ')
		obj->flag[SPACE] = TRUE;
	if (obj->str[obj->idx] == '#')
		obj->flag[HASH] = TRUE;
*/
	obj->idx++;
}

void	ft_parse_specifier(t_obj *obj, va_list ap)
{
	if (obj->str[obj->idx] == '-' || obj->str[obj->idx] == '0')  //ICI ON RAJOUTERA "+ #"
		ft_parse_flag(obj);
	if ((ft_isdigit(obj->str[obj->idx]) && obj->str[obj->idx] != '0') ||
			obj->str[obj->idx] == '*')
		ft_parse_size(obj, ap);
	if (obj->str[obj->idx] == '.')
		ft_parse_prec(obj, ap);
}
