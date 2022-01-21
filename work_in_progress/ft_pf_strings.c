/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_strings.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krozis <krozis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 14:22:09 by krozis            #+#    #+#             */
/*   Updated: 2022/01/21 16:28:04 by krozis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int pf_str_with_prec(char *str, t_fid *fid, int len)
{
	int res;

	res = fid->flag[M_WIDTH] - fid->flag[PREC];
	if (res < 0)
		return (write(1, str, fid->flag[PREC]));
	else if (fid->flag[MINUS] == 0)
	{
		while (res)
		{
			write(1, " ", 1);
			res--;
		}
		write(1, str, fid->flag[PREC]);
	}
	else
	{
		write(1, str, fid->flag[PREC]);
		while (res)
		{
			write(1, " ", 1);
			res--;
		}
	}
	return (fid->flag[M_WIDTH]);
}

static int	pf_str_no_prec(char *str, t_fid *fid, int len)
{
	int	res;
	
	res = fid->flag[M_WIDTH] - len;
	if (res < 0)
		return (write(1, str, len));
	else if (fid->flag[MINUS] == 0)
	{
		while (res)
		{
			write(1, " ", 1);
			res--;
		}
		write(1, str, len);
	}
	else
	{
		write(1, str, len);
		while (res)
		{
			write(1, " ", 1);
			res--;
		}
	}
	return (fid->flag[M_WIDTH]);
}

int	pf_string(char *str, t_fid *fid)
{
	if (fid->flag[PREC] == 0 || (fid->flag[PREC] >= ft_strlen(str)))
	{
		int a = pf_str_no_prec(str, fid, ft_strlen(str));
		//printf("TEST = %i\n\n", a);
		return (a);
	}	
	return (pf_str_with_prec(str, fid, ft_strlen(str)));
}