#include "ft_printf.h"


int main(void)
{
    int     i = -61;
    char    c = 't';
    char    *str = "tester";

  //  printf("\n|--MY res = %i --|\n", ft_printf("|%-*.*s|", 20, 4, str));
    printf("\n|--OF res = %i --|\n", printf("|%-1.5d|", i));
   
    return (0);
}