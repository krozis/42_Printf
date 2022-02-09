/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krozis <krozis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 16:18:31 by krozis            #+#    #+#             */
/*   Updated: 2022/02/09 15:54:42 by krozis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	pf_int_sign_minus(int nb, t_fid *fid, int nb_len)
{
	int ret;
	int prec;

	ret = nb_len;
	prec = fid->flag[PREC];
	if (nb < 0 || fid->flag[PLUS] || fid->flag[SPACE])
	{
		if (nb < 0)
			write(1, "-", 1);
		else if (fid->flag[PLUS])
			write(1, "+", 1);
		else
			write(1, " ", 1);
		ret++;
	}
	while (prec > nb_len)
	{
		write(1, "0", 1);
		prec--;
		ret++;
	}
	ft_pf_putnbr(nb);
	while (fid->flag[M_WIDTH] > ft_max(nb_len, fid->flag[PREC]) + 1)
	{
		write(1, " ", 1);
		fid->flag[M_WIDTH]--;
		ret++;
	}
	return (ret);
}

static int	pf_int_with_sign(int nb, t_fid *fid, int nb_len)
{
	int ret;
	int prec;

	ret = nb_len;
	prec = fid->flag[PREC];
	while (fid->flag[M_WIDTH] > ft_max(nb_len, fid->flag[PREC]) + 1)
	{
		write(1, " ", 1);
		fid->flag[M_WIDTH]--;
		ret++;
	}
	if (nb < 0 || fid->flag[PLUS] || fid->flag[SPACE])
	{
		if (nb < 0)
			write(1, "-", 1);
		else if (fid->flag[PLUS])
			write(1, "+", 1);
		else
			write(1, " ", 1);
		ret++;
	}
	while (prec > nb_len)
	{
		write(1, "0", 1);
		prec--;
		ret++;
	}
	ft_pf_putnbr(nb);
	return (ret);

}

static int	pf_int_default(int nb, t_fid *fid, int nb_len)
{
	int i;

	i = 0;
	if (fid->flag[MINUS])
	{
		while (nb_len < fid->flag[PREC] - i++)
			write(1, "0", 1);
		ft_putnbr_fd(nb, 1);
	}
	i = 0;
	while ((fid->flag[M_WIDTH] > fid->flag[PREC] + i) && 
		(fid->flag[M_WIDTH] > nb_len + i))
		i += write(1, " ", 1);
	i = 0;
	if (fid->flag[MINUS] == 0)
	{
		while (nb_len < fid->flag[PREC] - i++)
			write(1, "0", 1);
		ft_putnbr_fd(nb, 1);
	}		
	return (ft_max(fid->flag[M_WIDTH], fid->flag[PREC]));
}

int	pf_int(int nb, t_fid *fid)
{
	int	nb_len;

	nb_len = ft_nbrlen(nb);
	if (nb < 0 || fid->flag[SPACE] || fid->flag[PLUS])
	{
		if (fid->flag[MINUS])
			return (pf_int_sign_minus(nb, fid, nb_len));
		return (pf_int_with_sign(nb, fid, nb_len));		
	}
	else if (fid->flag[M_WIDTH] <= nb_len && fid->flag[PREC] <= nb_len)
	{
		ft_putnbr_fd(nb, 1);
		return (nb_len);
	}
	return (pf_int_default(nb, fid, nb_len));
}