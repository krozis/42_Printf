/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krozis <krozis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:20:33 by stelie            #+#    #+#             */
/*   Updated: 2022/03/08 16:30:09 by krozis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include <limits.h>

# define ERROR -1
# define TYPESET "csiduxXp"
# define FLAGSET "#+- 0"
# define HEXA_UP "0123456789ABCDEF"
# define HEXA_LOW "0123456789abcdef"

typedef enum e_bool
{
	FALSE,
	TRUE
}				t_bool;

typedef enum e_flags
{
	ZERO,
	SHARP,
	MINUS,
	PLUS,
	SPACE,
	M_WIDTH,
	PREC,
	FID_ERROR
}				t_flags;

typedef struct s_fid
{
	int		flag[8];
	char	conv;
	int		fid_len;
	t_bool	def_pre;
}				t_fid;

int		ft_printf(const char *format, ...);
void	ft_bzero(void *s, size_t n);
size_t	ft_strlen(const char *str);
t_bool	ft_incharset(char c, char *charset);
t_bool	ft_isdigit(int c);
int		ft_atoi(const char *str);
t_bool	ft_isspace(int c);
size_t	ft_nbrlen(long nb);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_pf_putnbr(int n);
size_t	ft_hexalen(size_t nb);
int		ft_max(int a, int b);
int		use_fid(va_list list, t_fid *fid);
int		pf_string(char *str, t_fid *fid);
int		pf_int(int nb, t_fid *fid);
int		pf_uint(unsigned int nb, t_fid *fid);
int		pf_hexa(unsigned int nb, t_fid *fid);
int		pf_ptr(size_t addr, t_fid *fid);

#endif