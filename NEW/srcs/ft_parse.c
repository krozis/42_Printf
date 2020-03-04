/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stelie <stelie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 14:49:42 by stelie            #+#    #+#             */
/*   Updated: 2020/03/04 19:53:06 by stelie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_parse_conv(t_obj *obj)
{
	if (ft_in_charset(CONVSET, obj->str[obj->idx]))
	{
		obj->conv = obj->str[obj->idx];
		obj->idx++;
	}
}

static void	ft_parse_prec_size(t_obj *obj, int trig)
{
	if (trig == 0)
	{
		obj->idx++;
		obj->dot = ft_mini_atoi(obj->str + obj->idx);
		while (ft_isdigit(obj->str[obj->idx]) && obj->str[obj->idx] != '\0')
			obj->idx++;
	}
	else
	{
		obj->size = ft_mini_atoi(obj->str + obj->idx);
		while (ft_isdigit(obj->str[obj->idx]) && obj->str[obj->idx] != '\0')
			obj->idx++;/* code */
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
}

static void	ft_parse_specifier(t_obj *obj)
{
	if (obj->str[obj->idx] == '-' || obj->str[obj->idx] == '0')  //ICI ON RAJOUTERA "+ #"
		ft_parse_flag(obj);
	if ((ft_isdigit(obj->str[obj->idx]) && obj->str[obj->idx] != '0') ||
			obj->str[obj->idx] == '*')
		ft_parse_prec_size(obj, 1);
	if (obj->str[obj->idx] == '.')
		ft_parse_prec_size(obj, 0);
}

t_bool	ft_parse(t_obj *obj)
{
	if (ft_parse_percent(obj) || obj->str[obj->idx] == '\0')
		return (FALSE);
	while (obj->str[obj->idx] != '\0' && (ft_isdigit(obj->str[obj->idx]) ||
			ft_in_charset(SPECIFIERS, obj->str[obj->idx])))
		ft_parse_specifier(obj);
	ft_parse_conv(obj);
	return (TRUE);
}
