/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krozis <krozis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:20:33 by stelie            #+#    #+#             */
/*   Updated: 2022/01/21 15:45:43 by krozis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft.h"
# include <stdio.h>

# define ERROR -1
# define TYPESET "csiduxXp"
# define FLAGSET "#+- 0"

typedef	enum e_flags
{
	ZERO,
	SHARP,
	MINUS,
	PLUS,
	SPACE,
	M_WIDTH,
	PREC,
	FID_ERROR
}			t_flags;

typedef struct s_fid
{
	int		flag[8];		//contient les flags, la min width, la precision
	char	conv;			//conversion "cspdiuxX"
	int		fid_len;		//taille du FID (sans compter le %)
}				t_fid;


/*
ft_printf.c
*/
int		ft_printf(const char *format, ...);

/*
tools
*/
void	ft_bzero(void *s, size_t n);
//char	*ft_strrev(char *str);
//char	*ft_itoa_pf(int i, char *str, int base);
size_t	ft_strlen(const char *str);
t_bool	ft_incharset(char c, char *charset);
t_bool	ft_isdigit(int c);
int		ft_atoi(const char *str);
t_bool	ft_isspace(int c);

/*
ft_pf_use.c
*/
int	use_fid(va_list list, t_fid *fid);
int	pf_string(char *str, t_fid *fid);

#endif