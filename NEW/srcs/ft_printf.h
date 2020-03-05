/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stelie <stelie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 09:30:46 by stelie            #+#    #+#             */
/*   Updated: 2020/03/05 13:49:27 by stelie           ###   ########.fr       */
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
# define OPTIONAL_SPEC "# +"
# define CONVSET "cspdiuxX" // Certains comme C majuscule sont 
//l'equivalent de c avec le modificateur l
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
	const char	*str;		//l'argument obligatoire donné par l'usager
	size_t		idx;		//index de placement dans la str
	t_bool		flag[5];	//flags (-0+ #)
//	t_bool		modif[4];     BONUS PART
	int			ret;
	int			width;		//precision avec * ou chiffres
	int			prec;		//precision avec .
	int			size;		//taille qu'on va imprimer
	char		conv;		//type de conversion (csdiouxX)
	size_t		printed_c;	//nb de char affichés
}				t_obj;

int		ft_printf(const char *, ...);

t_bool	ft_parse(t_obj *obj, va_list ap);
void	ft_parse_specifier(t_obj *obj, va_list ap);
void	ft_pf_write(t_obj *obj, va_list ap);
void	ft_pf_clean_specs(t_obj *obj);					//OK
void	ft_write_c(t_obj *obj, va_list ap);				//OK

void	ft_write_s(t_obj *obj, va_list ap);				//OK
void	ft_write_s_w(t_obj *obj, char *str);       		//OK
void	ft_write_s_w_minus(t_obj *obj, char *str);		//OK
void	ft_write_s_p(t_obj *obj, char *str);			//OK
void	ft_write_s_w_p(t_obj *obj, char *str);			//OK
void	ft_write_s_w_p_minus(t_obj *obj, char *str);	//OK

void	ft_write_di(t_obj *obj, va_list ap);

#endif