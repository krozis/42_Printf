#include "ft_printf.h"


int main(void)
{
    printf("\n|-- res = %i --|\n", ft_printf("endive%21c%s%ctest", ' ', "de", ' '));
   
    return (0);
}