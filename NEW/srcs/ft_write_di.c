/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_di.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stelie <stelie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 13:48:45 by stelie            #+#    #+#             */
/*   Updated: 2020/03/05 15:26:44 by stelie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_write_di_mini(t_obj *obj, va_list ap)
{
	char	*str;
	int		i;

	i = 0;
	str = ft_itoa(va_arg(ap, int));
	while (str[i] && str[i] != '\0')
	{
		ft_putchar_fd(str[i], 1);
		i++;
		obj->printed_c++;
	}
	return (str);
}

void	ft_write_di(t_obj *obj, va_list ap)
{
	char	*str;

/*		PAS IMPORTANT MAIS A SAVOIR
	if (obj->flag[MINUS] && obj->flag[ZERO])
		obj->flag[ZERO] = 0;
	if (obj->prec < 0)
		obj->prec = 0;
*/
	if (obj->width)
		str = ft_write_di_w(obj, ap);
	else
	{
		str = ft_write_di_mini(obj, ap);
	}
	free (str);
}
