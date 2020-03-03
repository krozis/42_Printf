/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stelie <stelie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 16:06:12 by stelie            #+#    #+#             */
/*   Updated: 2020/02/06 16:56:04 by stelie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

t_bool	is_flag(char c, char *flagset)
{
	while(*flagset)
	{
		if (c == *flagset)
			return (TRUE);
		flagset++;
	}
	return (FALSE);
}
