/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stelie <stelie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 19:58:06 by stelie            #+#    #+#             */
/*   Updated: 2020/02/15 09:52:06 by stelie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_putchar_count(char c, int *count)
{
	write(1, &c, 1);
	(*count)++;
}

int		ft_printf(const char *str, ...)
{
	int		res;
	t_obj	obj;
	va_list	ap;

	if (!str)
		return (ERROR);
	ft_bzero(&obj, sizeof(t_obj));
	

	ft_bzero(&obj, sizeof(t_obj));
	return (res);
}
