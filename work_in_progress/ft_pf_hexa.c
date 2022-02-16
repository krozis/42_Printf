/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_hexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krozis <krozis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:07:57 by krozis            #+#    #+#             */
/*   Updated: 2022/02/16 23:40:33 by krozis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	pf_hexa_print(int nb, t_fid *fid, int nb_len, t_bool low)
{
	int	i;

	i = 0;
	if (fid->flag[SHARP])
	{
		i += 2;
		ft_printf("0%c", fid->conv);
	}
	if (fid->flag[ZERO])
	{
		while (fid->flag[M_WIDTH] > nb_len + i++)
			write(1, "0", 1);
	}
	while (fid->flag[PREC] > nb_len++)
		write(1, "0", 1);
	ft_pf_puthexa(nb, low);
}

static int	pf_hexa_default(int nb, t_fid *fid, int nb_len, t_bool low)
{
	int	len;
	int	i;

	i = 0;
	len = nb_len;
	if (fid->flag[SHARP])
		len += 2;
	if (fid->flag[MINUS])
		pf_hexa_print(nb, fid, nb_len, low);
	while (fid->flag[M_WIDTH] > len + i && fid->flag[ZERO] == 0
		&& fid->flag[M_WIDTH] > fid->flag[PREC] + i)
		i += write(1, " ", 1);
	if (fid->flag[MINUS] == 0)
		pf_hexa_print(nb, fid, nb_len, low);
	if (fid->flag[PREC] > nb_len && fid->flag[SHARP])
		return (ft_max(fid->flag[PREC] + 2, fid->flag[M_WIDTH]));
	if (fid->flag[PREC] > nb_len)
		return (ft_max(fid->flag[PREC], fid->flag[M_WIDTH]));
	return (ft_max(len, fid->flag[M_WIDTH]));
}

int	pf_hexa(int nb, t_fid *fid)
{
	int		nb_len;
	t_bool	low;

	if (fid->conv == 'X')
		low = FALSE;
	else
		low = TRUE;
	nb_len = ft_hexalen(nb);
	return (pf_hexa_default(nb, fid, nb_len, low));
}
