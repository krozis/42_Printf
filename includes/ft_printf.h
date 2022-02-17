/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krozis <krozis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:20:33 by stelie            #+#    #+#             */
/*   Updated: 2022/02/17 18:07:15 by krozis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft.h"
# include <stdio.h>
# include <limits.h>

# define RED   "\x1B[31m"
# define GRN   "\x1B[32m"
# define YEL   "\x1B[33m"
# define BLU   "\x1B[34m"
# define MAG   "\x1B[35m"
# define CYN   "\x1B[36m"
# define WHT   "\x1B[37m"
# define RESET "\x1B[0m"

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
size_t	ft_strlen(const char *str);
t_bool	ft_incharset(char c, char *charset);
t_bool	ft_isdigit(int c);
int		ft_atoi(const char *str);
t_bool	ft_isspace(int c);
size_t	ft_nbrlen(long nb);
void	ft_putchar_fd(char c, int fd);
void    ft_putstr_fd(char *s, int fd);
void    ft_putnbr_fd(int n, int fd);
int		ft_abs(int nb);
void	ft_pf_putnbr(int n);
void	ft_pf_putuint(unsigned int nb);
void	ft_pf_puthexa(int nb, t_bool low);
void	ft_pf_putptr(size_t nb, t_bool first);
size_t	ft_hexalen(size_t nb);

/*
ft_pf_use.c
*/
int	use_fid(va_list list, t_fid *fid);
int	pf_string(char *str, t_fid *fid);
int	pf_int(int nb, t_fid *fid);
int	pf_uint(unsigned int nb, t_fid *fid);
int	pf_hexa(int nb, t_fid *fid);
int	pf_ptr(size_t addr, t_fid *fid);

/*
Other (tools)
*/

# include <stdio.h>
void	show_fid(t_fid *fid);

#endif