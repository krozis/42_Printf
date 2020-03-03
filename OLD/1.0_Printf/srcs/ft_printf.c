/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stelie <stelie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 14:39:41 by stelie            #+#    #+#             */
/*   Updated: 2020/02/06 17:24:11 by stelie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_printf(const char *str, ...)
{
	int			i;
	static int	count = 0;

	i = 0;
	while (str[i])
	{
		while (str[i] && str[i] != '%')
		{
			count = ft_putchar_fd_count(str[i], 1, count);
			i++;
		}
		while (str[i] && str[i] != '%')
	 }
	
	printf("\nRetour = %i\n", count);
	return (count);
}