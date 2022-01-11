/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stelie <stelie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 11:29:38 by stelie            #+#    #+#             */
/*   Updated: 2022/01/11 15:47:53 by stelie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_get_width(const char *format, t_pf *fid)
{
	int	i;

	i = 0;
	fid->minwid = ft_atoi(format);
	while (*format != '\n' && ft_isdigit(*format))
	{
		format++;
		i++;
	}
	if (*format == '.')
	{
		format++;
		i++;
		fid->maxwid = ft_atoi(format);
		while (*format != '\n' && ft_isdigit(*format))
		{
			format++;
			i++;
		}
	}
	return (i);
}

static t_bool	ft_get_flag(char c, t_pf *fid)
{
	if (c == '#' && fid->sharp == FALSE)
		fid->sharp = TRUE;
	else if (c == '0' && fid->zero == FALSE)
		fid->zero = TRUE;
	else if (c == '+' && fid->plus == FALSE)
		fid->plus = FALSE;
	else if (c == '-' && fid->minus == FALSE)
		fid->minus = TRUE;
	else if (c == ' ' && fid->space == FALSE)
		fid->space = TRUE;
	else
		return (FALSE);
	return (TRUE);
}

static int	pf(const char *format, va_list list, t_pf *fid)
{
	if (ft_incharset(*format, FLAGSET) && fid->conv == 0)
	{	
		while (ft_incharset(*format, FLAGSET))
		{
			if (ft_get_flag(*format, fid) == FALSE)
				return (ERROR);
			format++;
			fid->fidlen++;
		}
	}
	format += ft_get_width(format, fid);
	if (ft_incharset(*format, TYPESET))
	{
		fid->conv = *format;
		format++;
		return (ft_error_control());
	}
	return (ERROR);
}

static int	ft_printf2(const char *format, va_list list)
{
	int		res;
	t_pf	*fid;

	res = 0;
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
				res += write(1, "%", 1);
			else
			{
				ft_bzero(fid, sizeof(t_pf));
				res += pf(format, list, fid);
				if (fid->error == TRUE)
					return (ERROR);
				format += fid->fidlen;
			}
		}
		else
			res += write(1, (void *)format, 1);
		format++;
	}
	return (res);
}

int	ft_printf(const char *format, ...)
{
	va_list	list;
	int		res;

	va_start(list, format);
	res = ft_printf2(format, list);
	va_end(list);
	return (res);
}
