/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stelie <stelie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:17:46 by stelie            #+#    #+#             */
/*   Updated: 2021/11/29 16:51:04 by stelie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		printed;

	if (!format)
		return (ERROR);
	va_start(ap, format);
	while (*format)
	{
		if (*format == '%')
			//a gerer
		format++;
	}
	va_end(ap);
	return (0);
}
