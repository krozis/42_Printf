/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_tools.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stelie <stelie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 17:00:51 by stelie            #+#    #+#             */
/*   Updated: 2020/03/10 17:10:03 by stelie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_pf_putchar_count(t_obj *obj, char c)
{
	write(1, &c, 1);
	obj->printed_c++;
}

void	ft_pf_putstr_count(t_obj *obj)
{
	while (*(obj->str) && *(obj->str) != '\0')
	{
		ft_pf_putchar_count(obj, *(obj->str));
		obj->str++;
	}	
}