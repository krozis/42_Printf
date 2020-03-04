/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_in_charset.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stelie <stelie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 15:37:14 by stelie            #+#    #+#             */
/*   Updated: 2020/03/04 15:40:17 by stelie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool	ft_in_charset(char *charset, char c)
{
	if (charset && c != 0)
		while (*charset && *charset != 0)
		{
			if (*charset == c)
				return (TRUE);
			charset++;
		}
	return (FALSE);
}