#include "ft_printf.h"


int main(void)
{
    int     i = -24;
    char    c = 't';
    char    *str = "tester";

    printf("\n|--MY res = %i --|\n", ft_printf("|%.5d|", i));
    printf("\n|--OF res = %i --|\n", printf("|%.5d|", i));
 //   while (1)
 //       ;
    return (0);
}