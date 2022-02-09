/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_uint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krozis <krozis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:57:08 by krozis            #+#    #+#             */
/*   Updated: 2022/02/09 17:02:07 by krozis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	pf_uint_print(unsigned int nb, t_fid *fid, int nb_len)
{

	while (nb_len++ < fid->flag[PREC])
		write(1, "0", 1);
	ft_pf_putuint(nb);
}

int	pf_uint(unsigned int nb, t_fid *fid)
{
	int nb_len;
	int i;

	i = 0;
	nb_len = ft_nbrlen(nb);
	if (fid->flag[MINUS])
		pf_uint_print(nb, fid, nb_len);
	while ((fid->flag[M_WIDTH] > fid->flag[PREC] + i) && 
		(fid->flag[M_WIDTH] > nb_len + i))
	{
		if (fid->flag[ZERO])
			i += write(1, "0", 1);
		else
			i += write(1, " ", 1);
	}
	if (fid->flag[MINUS] == 0)
		pf_uint_print(nb, fid, nb_len);
	return (ft_max(nb_len, ft_max(fid->flag[M_WIDTH], fid->flag[PREC])));
}