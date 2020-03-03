/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stelie <stelie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 09:30:46 by stelie            #+#    #+#             */
/*   Updated: 2020/02/15 09:57:21 by stelie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include "libft.h"

# define FLAGSET "-+ #0*."
# define SEPCSET "cspdiuxX"
# define BASE10 "0123456789"
# define HEXADECIMAL "0123456789abcdef"
# define OCTAL "01234567"
# define ERROR -1

typedef struct	s_obj
{
	const char	*str;
	int			minus;
//	t_bool	plus;
	t_bool		zero;
//	int		space;
	int			min_len;
	int			dot;	//	(Precision : POINT .)
//	int		wldcrd;		(WILDCARD *)	
//	int		sharp;		(DIESE)
}				t_obj;

void	ft_putchar_count(char c, int *count);

int		ft_printf(const char *, ...);

#endif