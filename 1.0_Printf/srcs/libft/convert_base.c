/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stelie <stelie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 14:01:01 by stelie            #+#    #+#             */
/*   Updated: 2020/02/10 15:54:03 by stelie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				cb_index(char c, char *base)
{
	int		i;

	i = -1;
	while (base[++i])
	{
		if (c == base[i])
			return (i);
	}
	return (-1);
}

int				cb_m_size(unsigned int nb, int baselen)
{
	unsigned int	i;
	t_bool			a;

	i = 0;
	a = FALSE;
	while (!a)
	{
		if (nb <= ft_power(baselen, i))
			a = TRUE;
		i++;
	}
	return (i);
}

unsigned int	to_base_10(char *nbr, char *base_from)
{
	int				i;
	int				nbrlen;
	int				baselen;
	unsigned int	res;

	i = -1;
	res = 0;
	nbrlen = ft_strlen(nbr);
	baselen = ft_strlen(base_from);
	while (++i < nbrlen)
		res += cb_index(nbr[nbrlen - 1 - i], base_from) * ft_power(baselen, i);
	return (res);
}

char			*convert_base(char *nbr, char *base_from, char *base_to)
{
	int		m;
	int		i;
	int		sign;

	sign = 0;
	i = -1;
	while(nbr[++i] && (nbr[i] == '+' || nbr[i] == '-'))
		if (nbr[i] == '-')
			sign++;
	m = cb_m_size(to_base_10(nbr + i, base_from), ft_strlen(base_to));
	if (sign % 2 == 0)
		return (base_10_to(to_base_10(nbr + i, base_from), 1, m, base_to));
	return (base_10_to(to_base_10(nbr + i, base_from), -1, m + 1, base_to));
}