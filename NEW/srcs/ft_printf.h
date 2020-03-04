/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stelie <stelie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 09:30:46 by stelie            #+#    #+#             */
/*   Updated: 2020/03/04 19:45:21 by stelie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include "libft.h"

# define SPECIFIERS "-0.*"
# define OPT_SPEC "# +"
# define CONVSET "cspdiuxX"
# define BASE10 "0123456789"
# define HEXADECIMAL "0123456789abcdef"
# define OCTAL "01234567"
# define ERROR -1

typedef enum	s_flags
{
	MINUS,
	ZERO,
	PLUS,
	SPACE,
	HASH
}				t_flags;

/* BONUS PART
typedef enum	s_modifs
{
	L,
	LL,
	H,
	HH,
}				t_modifs;
*/

typedef struct	s_obj
{
	const char	*str;
	size_t		idx;
	t_bool		flag[5];
//	t_bool		modif[4];     BONUS PART
	int			size;
	int			ret;
	int			dot;
	char		conv;
	size_t		printed_c;
}				t_obj;



int		ft_printf(const char *, ...);

t_bool	ft_parse(t_obj *obj);
t_bool	ft_parse_percent(t_obj *obj);





#endif