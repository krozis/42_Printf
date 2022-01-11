/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stelie <stelie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:20:33 by stelie            #+#    #+#             */
/*   Updated: 2022/01/11 15:22:59 by stelie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft.h"

# define ERROR -1
# define TYPESET "csiduxXp"
# define FLAGSET "#+- 0"

typedef struct s_pf
{
	char	conv;			//conversion "cspdiuxX"
	t_bool	sharp;			//optional # flag
	t_bool	zero;			//optional 0 flag
	t_bool	minus;			//optional - flag
	t_bool	plus;			//optional + flag
	t_bool	space;			//optional space flag
	t_bool	minwid;			//optional min width (ex: %5s)
	t_bool	maxwid;			//optional max width (ex: %.5s)
	int		fidlen;			//taille du fid
	int 	prlen;			//nb de char imprimes
	t_bool	error;			//detect any error (incompatiblity, redundance, ...)
}				t_pf;

int		ft_printf(const char *format, ...);
void	ft_bzero(void *s, size_t n);
char	*ft_strrev(char *str);
char	*ft_itoa_pf(int i, char *str, int base);

#endif