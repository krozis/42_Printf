/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_s_w.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stelie <stelie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 10:45:25 by stelie            #+#    #+#             */
/*   Updated: 2020/03/05 11:53:11 by stelie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_write_s_w_minus(t_obj *obj, char *str)
{
	int	len;

	len = ft_strlen(str);
	while (*str && *str != '\0')
	{
		ft_putchar_fd(*str, 1);
		str++;
		obj->printed_c++;
	}
	while (len < obj->width)
	{
		ft_putchar_fd(' ', 1);
		obj->printed_c++;
		len++;
	}
}

void	ft_write_s_w(t_obj *obj, char *str)
{
	int	len;

	len = ft_strlen(str);
	while (len < obj->width)
	{
		ft_putchar_fd(' ', 1);
		obj->printed_c++;
		len++;
	}
	while (*str && *str != '\0')
	{
		ft_putchar_fd(*str, 1);
		str++;
		obj->printed_c++;
	}
}
