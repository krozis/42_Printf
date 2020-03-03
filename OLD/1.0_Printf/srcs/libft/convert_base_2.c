/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_base_2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stelie <stelie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 16:06:31 by stelie            #+#    #+#             */
/*   Updated: 2020/02/10 15:53:32 by stelie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool	cb_check_valid_nb(char *nbr, char *base)
{
	int		i;
	int		j;
	t_bool	found;

	i = 0;
	found = TRUE;
	while (nbr[i] && found == TRUE)
	{
		found = FALSE;
		j = -1;
		while (base[++j])
			if (nbr[i] == base[j])
			{
				found = TRUE;
				i++;
			}
	}
	if (!nbr[i])
		return (TRUE);
	return (FALSE);
}

t_bool	cb_check_valid_base(char *base)
{
	int	i;
	int	j;

	if (ft_strlen(base) < 2)
		return (FALSE);
	i = -1;
	while (base[++i])
	{
		if (!(ft_isprint(base[i])) || base[i] == '-' || base[i] == '+')
			return (FALSE);
		j = -1;
		while (base[++j])
		{
			if (i != j && base[i] == base[j])
				return (FALSE);
		}
	}
	return (TRUE);
}

void	fill_res(unsigned int nbr, char *base, char *res, int *i)
{
	unsigned int	size;
	
	size = ft_strlen(base);
	if (nbr < size)
	{
		res[*i] = base[nbr];
		(*i)++;
	}
	else
	{
		fill_res(nbr / size, base, res, i);
		fill_res(nbr % size, base, res, i);
	}
}

char	*base_10_to(unsigned int nbr, int sign, int m, char *base)
{
	char	*res;
	int		i;

	i = 0;
	if (!(res = malloc(sizeof(char) * m)))
		return (NULL);
	if (sign == -1)
	{
		res[0] = '-';
		i++;
	}
	fill_res(nbr, base, res, &i);
	res[i] = '\0';
	return (res);
}