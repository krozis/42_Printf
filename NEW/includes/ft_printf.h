/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stelie <stelie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:20:33 by stelie            #+#    #+#             */
/*   Updated: 2021/11/30 13:09:40 by stelie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft.h"

# define ERROR -1

typedef struct s_fid
{
	char	conv;			//conversion "cspdiuxX"
	int		fid_printed;	//nb de char imprimes pour ce FID uniquement
	int		fid_len;		//length of the format identifier
}				t_fid;

typedef struct s_pfformat
{
	const char	*format;
	int			index;
	int			printed;
	t_bool		error;
}				t_pfformat;

int	ft_printf(const char *format, ...);
int	bonus(void);

#endif