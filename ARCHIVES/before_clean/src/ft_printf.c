/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krozis <krozis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 19:34:41 by krozis            #+#    #+#             */
/*   Updated: 2022/03/08 16:50:07 by krozis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	check_if_valid_fid(t_fid *fid)
{
	if (!(ft_incharset(fid->conv, TYPESET)))
		fid->flag[FID_ERROR] = 1;
	if (fid->flag[ZERO] && ((fid->conv == 'c' || fid->conv == 's'
				|| fid->conv == 'p') || fid->flag[MINUS] == 1))
		fid->flag[FID_ERROR] = 1;
	if (fid->flag[SHARP] && !(fid->conv == 'x' || fid->conv == 'X'))
		fid->flag[FID_ERROR] = 1;
	if (fid->flag[PLUS] && (!(fid->conv == 'i' || fid->conv == 'd')
			|| fid->flag[SPACE] == 1))
		fid->flag[FID_ERROR] = 1;
	if (fid->flag[SPACE] && !(fid->conv == 'i' || fid->conv == 'd'))
		fid->flag[FID_ERROR] = 1;
	if (fid->flag[PREC] > 0 && (fid->conv == 'c' || fid->conv == 'p'))
		fid->flag[FID_ERROR] = 1;
	if (fid->flag[ZERO] && fid->flag[PREC] > 0)
		fid->flag[FID_ERROR] = 1;
}

static void	check_if_valid_flag(char c, t_fid *fid)
{
	if (c == '0' && fid->flag[ZERO] == 0)
		fid->flag[ZERO] = 1;
	else if (c == '#' && fid->flag[SHARP] == 0)
		fid->flag[SHARP] = 1;
	else if (c == '-' && fid->flag[MINUS] == 0)
		fid->flag[MINUS] = 1;
	else if (c == '+' && fid->flag[PLUS] == 0)
		fid->flag[PLUS] = 1;
	else if (c == ' ' && fid->flag[SPACE] == 0)
		fid->flag[SPACE] = 1;
	else
		fid->flag[FID_ERROR] = 1;
	if (fid->flag[PLUS] && fid->flag[SPACE])
		fid->flag[FID_ERROR] = 1;
	if (fid->flag[MINUS] && fid->flag[ZERO])
		fid->flag[FID_ERROR] = 1;
}

static void	get_fid(const char *format, t_fid *fid)
{
	while (ft_incharset(*format, FLAGSET))
	{
		check_if_valid_flag(*format, fid);
		format++;
		fid->fid_len++;
	}
	if (ft_isdigit(*format))
	{
		fid->flag[M_WIDTH] = ft_atoi(format);
		while (ft_isdigit(*format) && format++)
			fid->fid_len++;
	}
	if (*format == '.')
	{
		fid->def_pre = TRUE;
		format++;
		fid->fid_len++;
		fid->flag[PREC] = ft_atoi(format);
		while (ft_isdigit(*format) && format++)
			fid->fid_len++;
	}
	fid->conv = *format;
	format++;
	fid->fid_len++;
}

static int	found_fid(va_list list, const char *format, int *pf_res)
{
	t_fid	fid;

	ft_bzero(&fid, sizeof(t_fid));
	if (*format && *format == '%')
	{
		*pf_res += 1;
		return (write(1, "%", 1));
	}
	else
	{
		get_fid(format, &fid);
		check_if_valid_fid(&fid);
		if (fid.flag[FID_ERROR])
			return (ERROR);
		*pf_res += use_fid(list, &fid);
	}
	return (fid.fid_len);
}

int	ft_printf(const char *format, ...)
{
	va_list	list;
	int		pf_res;
	int		fid_len;

	pf_res = 0;
	va_start(list, format);
	while (*format)
	{
		if (*format == '%')
		{
			fid_len = found_fid(list, format + 1, &pf_res);
			if (fid_len == ERROR)
				return (ERROR);
			format += fid_len;
		}
		else
			pf_res += write(1, format, 1);
		format++;
	}	
	va_end(list);
	return (pf_res);
}
