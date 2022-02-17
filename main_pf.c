/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_pf.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krozis <krozis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 13:51:26 by stelie            #+#    #+#             */
/*   Updated: 2022/02/17 23:36:57 by krozis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#define RN printf("\n");


# define RED   "\x1B[31m"
# define GRN   "\x1B[32m"
# define YEL   "\x1B[33m"
# define BLU   "\x1B[34m"
# define MAG   "\x1B[35m"
# define CYN   "\x1B[36m"
# define WHT   "\x1B[37m"
# define RESET "\x1B[0m"
#define RED_BAR_UP printf(RED"-----v---v---v---v-----------\n"RESET);
#define RED_BAR_DOWN printf(RED"-----^---^---^---^-----------\n"RESET);
#define SEPUP RN RED_BAR_UP RN
#define SEPDO RN RED_BAR_DOWN RN


int	main()
{
	char	*str =  "AH! testbug";
	char	c = 'F';
	int		res = 1;
	int		res2 = 3;

	ft_printf(GRN"-----------  CHAR  -------------\n"RESET);
	res = ft_printf("%%c     = |%c|\n", c);
	res2 =   printf("%%c     = |%c|\n", c);
	printf("MINE: %i\nREAL: %i\n", res, res2);
/*
	res = ft_printf("%%10c     = |%10c|\n", c);
	res2 =   printf("%%10c     = |%10c|\n", c);
	printf("MINE: %i\nREAL: %i\n", res, res2);

	res = ft_printf("%%-10c     = |%-10c|\n", c);
	res2 =   printf("%%-10c     = |%-10c|\n", c);
	printf("MINE: %i\nREAL: %i\n", res, res2);

	res = ft_printf("%%-c     = |%-c|\n", c);
	res2 =   printf("%%-c     = |%-c|\n", c);
	printf("MINE: %i\nREAL: %i\n", res, res2);
*/
	ft_printf(GRN"----------- STRINGS ------------\n"RESET);

	res = ft_printf("%%s    = |%s|\n", str);
	res2 =   printf("%%s    = |%s|\n", str);
	printf("MINE: %i\nREAL: %i\n", res, res2);
/*
	res = ft_printf("%%-s    = |%-s|\n", str);
	res2 =   printf("%%-s    = |%-s|\n", str);
	printf("MINE: %i\nREAL: %i\n", res, res2);

	res = ft_printf("%%4s    = |%4s|\n", str);
	res2 =   printf("%%4s    = |%4s|\n", str);
	printf("MINE: %i\nREAL: %i\n", res, res2);
	
	res = ft_printf("%%10s   = |%10s|\n", str);
	res2 =   printf("%%10s   = |%10s|\n", str);
	printf("MINE: %i\nREAL: %i\n", res, res2);
	
	res = ft_printf("%%.5s   = |%.5s|\n", str);
	res2 =   printf("%%.5s   = |%.5s|\n", str);
	printf("MINE: %i\nREAL: %i\n", res, res2);
	
	res = ft_printf("%%.10s  = |%.10s|\n", str);
	res2 =   printf("%%.10s  = |%.10s|\n", str);
	printf("MINE: %i\nREAL: %i\n", res, res2);
	
	res = ft_printf("%%-.5s  = |%-.5s|\n", str);
	res2 =   printf("%%-.5s  = |%-.5s|\n", str);
	printf("MINE: %i\nREAL: %i\n", res, res2);
	
	res = ft_printf("%%-10s  = |%-10s|\n", str);
	res2 =   printf("%%-10s  = |%-10s|\n", str);
	printf("MINE: %i\nREAL: %i\n", res, res2);
	
	res = ft_printf("%%10.5s = |%10.5s|\n", str);
	res2 =   printf("%%10.5s = |%10.5s|\n", str);
	printf("MINE: %i\nREAL: %i\n", res, res2);
	
	res = ft_printf("%%5.10s = |%5.10s|\n", str);
	res2 =   printf("%%5.10s = |%5.10s|\n", str);
	printf("MINE: %i\nREAL: %i\n", res, res2);
	
	res = ft_printf("%%5.6s  = |%5.6s|\n", str);
	res2 =   printf("%%5.6s  = |%5.6s|\n", str);
	printf("MINE: %i\nREAL: %i\n", res, res2);
*/
	ft_printf(GRN"----------- INT ------------\n"RESET);	

	res = ft_printf("%%i  = |%i|\n", 42);
	res2 =   printf("%%i  = |%i|\n", 42);
	printf("MINE: %i\nREAL: %i\n", res, res2);

	res = ft_printf("%%i  = |%i|\n", 42);
	res2 =   printf("%%i  = |%i|\n", 42);
	printf("MINE: %i\nREAL: %i\n", res, res2);
	
	res = ft_printf("%%5i  = |%5i|\n", 42);
	res2 =   printf("%%5i  = |%5i|\n", 42);
	printf("MINE: %i\nREAL: %i\n", res, res2);

	res = ft_printf("%%1i  = |%1i|\n", 42);
	res2 =   printf("%%1i  = |%1i|\n", 42);
	printf("MINE: %i\nREAL: %i\n", res, res2);

	res = ft_printf("%%.1i  = |%.1i|\n", 42);
	res2 =   printf("%%.1i  = |%.1i|\n", 42);
	printf("MINE: %i\nREAL: %i\n", res, res2);

	res = ft_printf("%%.5i  = |%.5i|\n", 42);
	res2 =   printf("%%.5i  = |%.5i|\n", 42);
	printf("MINE: %i\nREAL: %i\n", res, res2);

	res = ft_printf("%%5.1i  = |%5.1i|\n", 42);
	res2 =   printf("%%5.1i  = |%5.1i|\n", 42);
	printf("MINE: %i\nREAL: %i\n", res, res2);

	res = ft_printf("%%1.5i  = |%1.5i|\n", 42);
	res2 =   printf("%%1.5i  = |%1.5i|\n", 42);
	printf("MINE: %i\nREAL: %i\n", res, res2);

	res = ft_printf("%%5.6i  = |%5.6i|\n", 42);
	res2 =   printf("%%5.6i  = |%5.6i|\n", 42);
	printf("MINE: %i\nREAL: %i\n", res, res2);

	res = ft_printf("%%7.5i  = |%7.5i|\n", 42);
	res2 =   printf("%%7.5i  = |%7.5i|\n", 42);
	printf("MINE: %i\nREAL: %i\n", res, res2);

	res = ft_printf("%%- 5.1i  = |%- 5.1i|\n", -42);
	res2 =   printf("%%- 5.1i  = |%- 5.1i|\n", -42);
	printf("MINE: %i\nREAL: %i\n", res, res2);

	res = ft_printf("%%i  = |%i|\n", -42);
	res2 =   printf("%%i  = |%i|\n", -42);
	printf("MINE: %i\nREAL: %i\n", res, res2);

	res = ft_printf("%%5i  = |%5i|\n", INT_MIN);
	res2 =   printf("%%5i  = |%5i|\n", INT_MIN);
	printf("MINE: %i\nREAL: %i\n", res, res2);

	res = ft_printf("%%1i  = |%1i|\n", INT_MIN);
	res2 =   printf("%%1i  = |%1i|\n", INT_MIN);
	printf("MINE: %i\nREAL: %i\n", res, res2);

	res = ft_printf("%%.5i  = |%.5i|\n", INT_MIN);
	res2 =   printf("%%.5i  = |%.5i|\n", INT_MIN);
	printf("MINE: %i\nREAL: %i\n", res, res2);

	res = ft_printf("%%5.1i  = |%5.1i|\n", INT_MIN);
	res2 =   printf("%%5.1i  = |%5.1i|\n", INT_MIN);
	printf("MINE: %i\nREAL: %i\n", res, res2);

	res = ft_printf("%%1.5i  = |%1.5i|\n", INT_MIN);
	res2 =   printf("%%1.5i  = |%1.5i|\n", INT_MIN);
	printf("MINE: %i\nREAL: %i\n", res, res2);

	res = ft_printf("%%5.6i  = |%5.6i|\n", INT_MIN);
	res2 =   printf("%%5.6i  = |%5.6i|\n", INT_MIN);
	printf("MINE: %i\nREAL: %i\n", res, res2);

	res = ft_printf("%%-8.1i  = |%-8.1i|\n", 42);
	res2 =   printf("%%-8.1i  = |%-8.1i|\n", 42);
	printf("MINE: %i\nREAL: %i\n", res, res2);
	
	res = ft_printf("%%-8.7i  = |%-8.7i|\n", -424242);
	res2 =   printf("%%-8.7i  = |%-8.7i|\n", -424242);
	printf("MINE: %i\nREAL: %i\n", res, res2);
	
	res = ft_printf("%%8.7i  = |%8.7i|\n", -424242);
	res2 =   printf("%%8.7i  = |%8.7i|\n", -424242);
	printf("MINE: %i\nREAL: %i\n", res, res2);

	res = ft_printf("%% 5.1i  = |% 5.1i|\n", -42);
	res2 =   printf("%% 5.1i  = |% 5.1i|\n", -42);
	printf("MINE: %i\nREAL: %i\n", res, res2);

	res = ft_printf("%%.1i  = |%.1i|\n", -42);
	res2 =   printf("%%.1i  = |%.1i|\n", -42);
	printf("MINE: %i\nREAL: %i\n", res, res2);

	res = ft_printf("%%+5.1i  = |%+5.1i|\n", -42);
	res2 =   printf("%%+5.1i  = |%+5.1i|\n", -42);
	printf("MINE: %i\nREAL: %i\n", res, res2);

	res = ft_printf("%%+-i  = |%+-i|\n", -42);
	res2 =   printf("%%+-i  = |%+-i|\n", -42);
	printf("MINE: %i\nREAL: %i\n", res, res2);

	res = ft_printf("%%0i  = |%0i|\n", 42);
	res2 =   printf("%%0i  = |%0i|\n", 42);
	printf("MINE: %i\nREAL: %i\n", res, res2);
	
	res = ft_printf("%%0i  = |%0i|\n", -42);
	res2 =   printf("%%0i  = |%0i|\n", -42);
	printf("MINE: %i\nREAL: %i\n", res, res2);
	
	res = ft_printf("%%0+i  = |%0+i|\n", 42);
	res2 =   printf("%%0+i  = |%0+i|\n", 42);
	printf("MINE: %i\nREAL: %i\n", res, res2);
	
	res = ft_printf("%%0+i  = |%0+i|\n", -42);
	res2 =   printf("%%0+i  = |%0+i|\n", -42);
	printf("MINE: %i\nREAL: %i\n", res, res2);

	res = ft_printf("%% 0i  = |% 0i|\n", 42);
	res2 =   printf("%% 0i  = |% 0i|\n", 42);
	printf("MINE: %i\nREAL: %i\n", res, res2);

	res = ft_printf("%% 0i  = |% 0i|\n", -42);
	res2 =   printf("%% 0i  = |% 0i|\n", -42);
	printf("MINE: %i\nREAL: %i\n", res, res2);
	
	res = ft_printf("%%08 i  = |%0 8i|\n", 42);
	res2 =   printf("%%08 i  = |%0 8i|\n", 42);
	printf("MINE: %i\nREAL: %i\n", res, res2);
	
	res = ft_printf("%%0 8i  = |%0 8i|\n", -42);
	res2 =   printf("%%0 8i  = |%0 8i|\n", -42);
	printf("MINE: %i\nREAL: %i\n", res, res2);

	res = ft_printf("%%+-5.3i  = |%+-5.3i|\n", 42);
	res2 =   printf("%%+-5.3i  = |%+-5.3i|\n", 42);
	printf("MINE: %i\nREAL: %i\n", res, res2);
	
	res = ft_printf("%%+-4.3i  = |%+-4.3i|\n", 42);
	res2 =   printf("%%+-4.3i  = |%+-4.3i|\n", 42);
	printf("MINE: %i\nREAL: %i\n", res, res2);
	
	res = ft_printf("%%+-4.4i  = |%+-4.4i|\n", -42);
	res2 =   printf("%%+-4.4i  = |%+-4.4i|\n", -42);
	printf("MINE: %i\nREAL: %i\n", res, res2);
	
	res = ft_printf("%%+.4i  = |%+.4i|\n", 42);
	res2 =   printf("%%+.4i  = |%+.4i|\n", 42);
	printf("MINE: %i\nREAL: %i\n", res, res2);
	
	res = ft_printf("%%-20.6i  = |%-20.6i|\n", -42);
	res2 =   printf("%%-20.6i  = |%-20.6i|\n", -42);
	printf("MINE: %i\nREAL: %i\n", res, res2);
	
	ft_printf(GRN"----------- U INT ------------\n"RESET);

	res = ft_printf("%%u  = |%u|\n", 42);
	res2 =   printf("%%u  = |%u|\n", 42);
	printf("MINE: %i\nREAL: %i\n", res, res2);

	res = ft_printf("%%5u  = |%5u|\n", 42);
	res2 =   printf("%%5u  = |%5u|\n", 42);
	printf("MINE: %i\nREAL: %i\n", res, res2);

	res = ft_printf("%%1u  = |%1u|\n", 42);
	res2 =   printf("%%1u  = |%1u|\n", 42);
	printf("MINE: %i\nREAL: %i\n", res, res2);

	res = ft_printf("%%.5u  = |%.5u|\n", 42);
	res2 =   printf("%%.5u  = |%.5u|\n", 42);
	printf("MINE: %i\nREAL: %i\n", res, res2);

	res = ft_printf("%%.1u  = |%.1u|\n", 42);
	res2 =   printf("%%.1u  = |%.1u|\n", 42);
	printf("MINE: %i\nREAL: %i\n", res, res2);

	res = ft_printf("%%5.3u  = |%5.3u|\n", 42);
	res2 =   printf("%%5.3u  = |%5.3u|\n", 42);
	printf("MINE: %i\nREAL: %i\n", res, res2);

	res = ft_printf("%%5.6u  = |%5.6u|\n", 42);
	res2 =   printf("%%5.6u  = |%5.6u|\n", 42);
	printf("MINE: %i\nREAL: %i\n", res, res2);

	res = ft_printf("%%-5u  = |%-5u|\n", 42);
	res2 =   printf("%%-5u  = |%-5u|\n", 42);
	printf("MINE: %i\nREAL: %i\n", res, res2);

	res = ft_printf("%%-1u  = |%-1u|\n", 42);
	res2 =   printf("%%-1u  = |%-1u|\n", 42);
	printf("MINE: %i\nREAL: %i\n", res, res2);

	res = ft_printf("%%-.5u  = |%-.5u|\n", 42);
	res2 =   printf("%%-.5u  = |%-.5u|\n", 42);
	printf("MINE: %i\nREAL: %i\n", res, res2);

	res = ft_printf("%%-.1u  = |%-.1u|\n", 42);
	res2 =   printf("%%-.1u  = |%-.1u|\n", 42);
	printf("MINE: %i\nREAL: %i\n", res, res2);

	res = ft_printf("%%-5.3u  = |%-5.3u|\n", 42);
	res2 =   printf("%%-5.3u  = |%-5.3u|\n", 42);
	printf("MINE: %i\nREAL: %i\n", res, res2);

	res = ft_printf("%%-5.6u  = |%-5.6u|\n", 42);
	res2 =   printf("%%-5.6u  = |%-5.6u|\n", 42);
	printf("MINE: %i\nREAL: %i\n", res, res2);

	res = ft_printf("%%05u  = |%05u|\n", 42);
	res2 =   printf("%%05u  = |%05u|\n", 42);
	printf("MINE: %i\nREAL: %i\n", res, res2);

	res = ft_printf("%%01u  = |%01u|\n", 42);
	res2 =   printf("%%01u  = |%01u|\n", 42);
	printf("MINE: %i\nREAL: %i\n", res, res2);


	ft_printf(GRN "----------- HEXA ------------\n"RESET);

	printf("|%%x| -> 42\n");
	res =   ft_printf("|%x|\n", 42);
	res2 =     printf("|%x|\n", 42);
	printf("MINE: %i\nREAL: %i\n", res, res2);
	
	printf("|%%1x| -> 42\n");
	res =   ft_printf("|%1x|\n", 42);
	res2 =     printf("|%1x|\n", 42);
	printf("MINE: %i\nREAL: %i\n", res, res2);
	
	printf("|%%4x| -> 42\n");
	res =   ft_printf("|%4x|\n", 42);
	res2 =     printf("|%4x|\n", 42);
	printf("MINE: %i\nREAL: %i\n", res, res2);

	printf("|%%-1x| -> 42\n");
	res =   ft_printf("|%-1x|\n", 42);
	res2 =     printf("|%-1x|\n", 42);
	printf("MINE: %i\nREAL: %i\n", res, res2);
	
	printf("|%%-4x| -> 42\n");
	res =   ft_printf("|%-4x|\n", 42);
	res2 =     printf("|%-4x|\n", 42);
	printf("MINE: %i\nREAL: %i\n", res, res2);

	printf("|%%.1x| -> 42\n");
	res =   ft_printf("|%.1x|\n", 42);
	res2 =     printf("|%.1x|\n", 42);
	printf("MINE: %i\nREAL: %i\n", res, res2);

	printf("|%%.5x| -> 42\n");
	res =   ft_printf("|%.5x|\n", 42);
	res2 =     printf("|%.5x|\n", 42);
	printf("MINE: %i\nREAL: %i\n", res, res2);

	printf("|%%4.5x| -> 42\n");
	res =   ft_printf("|%4.5x|\n", 42);
	res2 =     printf("|%4.5x|\n", 42);
	printf("MINE: %i\nREAL: %i\n", res, res2);

	printf("|%%5.4x| -> 42\n");
	res =   ft_printf("|%5.4x|\n", 42);
	res2 =     printf("|%5.4x|\n", 42);
	printf("MINE: %i\nREAL: %i\n", res, res2);

	printf("|%%#x| -> 42\n");
	res =   ft_printf("|%#x|\n", 42);
	res2 =     printf("|%#x|\n", 42);
	printf("MINE: %i\nREAL: %i\n", res, res2);

	printf("|%%#.5X| -> 42\n");
	res =   ft_printf("|%#.5X|\n", 42);
	res2 =     printf("|%#.5X|\n", 42);
	printf("MINE: %i\nREAL: %i\n", res, res2);
	
	printf("|%%#5x| -> 42\n");
	res =   ft_printf("|%#5x|\n", 42);
	res2 =     printf("|%#5x|\n", 42);
	printf("MINE: %i\nREAL: %i\n", res, res2);

	printf("|%%#-5x| -> 42\n");
	res =   ft_printf("|%#-5x|\n", 42);
	res2 =     printf("|%#-5x|\n", 42);
	printf("MINE: %i\nREAL: %i\n", res, res2);

	printf("|%%#05x| -> 42\n");
	res =   ft_printf("|%#05x|\n", 42);
	res2 =     printf("|%#05x|\n", 42);
	printf("MINE: %i\nREAL: %i\n", res, res2);

	printf("|%%#0x| -> 42\n");
	res =   ft_printf("|%#0x|\n", 42);
	res2 =     printf("|%#0x|\n", 42);
	printf("MINE: %i\nREAL: %i\n", res, res2);

	ft_printf(GRN "----------- POINTER ------------\n"RESET);

	res = ft_printf("%%p  = |%p|\n", str);
	res2 =   printf("%%p  = |%p|\n", str);
	printf("MINE: %i\nREAL: %i\n", res, res2);

	res = ft_printf("%%-p  = |%-p|\n", str);
	res2 =   printf("%%-p  = |%-p|\n", str);
	printf("MINE: %i\nREAL: %i\n", res, res2);

	res = ft_printf("%%5p  = |%5p|\n", str);
	res2 =   printf("%%5p  = |%5p|\n", str);
	printf("MINE: %i\nREAL: %i\n", res, res2);

	res = ft_printf("%%20p  = |%20p|\n", str);
	res2 =   printf("%%20p  = |%20p|\n", str);
	printf("MINE: %i\nREAL: %i\n", res, res2);

	res = ft_printf("%%-5p  = |%-5p|\n", str);
	res2 =   printf("%%-5p  = |%-5p|\n", str);
	printf("MINE: %i\nREAL: %i\n", res, res2);	

	res = ft_printf("%%-20p  = |%-20p|\n", NULL);
	res2 =   printf("%%-20p  = |%-20p|\n", NULL);
	printf("MINE: %i\nREAL: %i\n", res, res2);	

	res = ft_printf("the password is %9x\n", 3735929054);
	res2 =   printf("the password is %9x\n", (unsigned int)3735929054);
	printf("MINE: %i\nREAL: %i\n", res, res2);	
//"st16 %0.*d\n", 50, 5
//	ft_pf_putptr(__SIZE_MAX__, TRUE);
	return (0);
}
