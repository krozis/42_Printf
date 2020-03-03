/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stelie <stelie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 09:30:46 by stelie            #+#    #+#             */
/*   Updated: 2020/03/03 14:58:12 by stelie           ###   ########.fr       */
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
	size_t		idx;
	int			len;
	int			ret;
	size_t		printed_c;
}				t_obj;


int		ft_printf(const char *, ...);

#endif