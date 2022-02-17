/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krozis <krozis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 08:42:22 by krozis            #+#    #+#             */
/*   Updated: 2022/02/17 09:41:53 by krozis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	pf_ptr_null(t_fid *fid)
{
	int	i;

	i = 0;
	if (fid->flag[MINUS])
		write(1, "(nil)", 5);
	while (fid->flag[M_WIDTH] > 5 + i++)
		write(1, " ", 1);
	if (fid->flag[MINUS] == 0)
		write(1, "(nil)", 5);
	return (ft_max(5, fid->flag[M_WIDTH]));
}

int	pf_ptr(size_t addr, t_fid *fid)
{
	size_t	len;
	int		i;

	if (addr == 0)
		return (pf_ptr_null(fid));
	i = 0;
	len = 2 + ft_hexalen(addr);
	if (fid->flag[MINUS])
		ft_pf_putptr(addr, TRUE);
	while ((size_t)fid->flag[M_WIDTH] > len + i++)
		write(1, " ", 1);
	if (fid->flag[MINUS] == 0)
		ft_pf_putptr(addr, TRUE);
	return (ft_max(len, fid->flag[M_WIDTH]));
}
