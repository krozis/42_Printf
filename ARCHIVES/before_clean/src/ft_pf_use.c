/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_use.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krozis <krozis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 07:33:32 by krozis            #+#    #+#             */
/*   Updated: 2022/03/08 17:24:28 by krozis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	pf_char(int c, t_fid *fid)
{
	int	res;

	res = 0;
	if (fid->flag[M_WIDTH] < 2)
		return (write(1, &c, 1));
	else if (fid->flag[MINUS])
	{
		res += write(1, &c, 1);
		while (fid->flag[M_WIDTH] > 1)
		{
			res += write(1, " ", 1);
			fid->flag[M_WIDTH]--;
		}
	}
	else
	{
		while (fid->flag[M_WIDTH] > 1)
		{
			res += write(1, " ", 1);
			fid->flag[M_WIDTH]--;
		}
		res += write(1, &c, 1);
	}
	return (res);
}

int	use_fid(va_list list, t_fid *fid)
{
	if (fid->conv == 'c')
		return (pf_char(va_arg(list, int), fid));
	if (fid->conv == 's')
		return (pf_string(va_arg(list, char *), fid));
	if (fid->conv == 'i' || fid->conv == 'd')
		return (pf_int(va_arg(list, int), fid));
	if (fid->conv == 'u')
		return (pf_uint(va_arg(list, unsigned int), fid));
	if (fid->conv == 'x' || fid->conv == 'X')
		return (pf_hexa(va_arg(list, unsigned int), fid));
	if (fid->conv == 'p')
		return (pf_ptr(va_arg(list, size_t), fid));
	return (ERROR);
}
