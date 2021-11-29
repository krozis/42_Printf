/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stelie <stelie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:20:33 by stelie            #+#    #+#             */
/*   Updated: 2021/11/29 16:41:00 by stelie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft.h"

# define ERROR -1

typedef struct s_conv
{
	t_bool	c_conv;
	t_bool	s_conv;
	t_bool	p_conv;
	t_bool	di_conv;
	t_bool	u_conv;
	t_bool	x_conv;
	t_bool	xup_conv;
}				t_conv;

int	ft_printf(const char *format, ...);
int	bonus(void);

#endif