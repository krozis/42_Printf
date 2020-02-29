#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/*
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
*/

# include "libft.h"

# define FLAGSET "-+ #0*."
# define SEPCSET "cspdiuxX"
# define BASE10 "0123456789"
# define HEXADECIMAL "0123456789abcdef"
# define OCTAL "01234567"
# define ERROR -1

void    ft_printf(void);

#endif