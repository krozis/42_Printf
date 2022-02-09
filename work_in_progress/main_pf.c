/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_pf.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krozis <krozis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 13:51:26 by stelie            #+#    #+#             */
/*   Updated: 2022/02/09 16:56:43 by krozis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#define RN printf("\n");


int	main()
{
	char	*str =  "testbug";
	char	c = 'F';
	int		res = 1;
	int		res2 = 3;

	ft_printf("-----------  CHAR  -------------\n");
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
	ft_printf("----------- STRINGS ------------\n");

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
	ft_printf("----------- INT ------------\n");	

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

	res = ft_printf("%%-8.7i  = |%-8.7i|\n", 42);
	res2 =   printf("%%-8.7i  = |%-8.7i|\n", 42);
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

	res = ft_printf("%%0+i  = |%0+i|\n", -42);
	res2 =   printf("%%0+i  = |%0+i|\n", -42);
	printf("MINE: %i\nREAL: %i\n", res, res2);

	res = ft_printf("%% 0i  = |% 0i|\n", 42);
	res2 =   printf("%% 0i  = |% 0i|\n", 42);
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

	ft_printf("----------- U INT ------------\n");

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

	printf(RED"\n");
	res = ft_printf("%%05u  = |%05u|\n", 42);
	res2 =   printf("%%05u  = |%05u|\n", 42);
	printf("MINE: %i\nREAL: %i\n", res, res2);

	res = ft_printf("%%01u  = |%01u|\n", 42);
	res2 =   printf("%%01u  = |%01u|\n", 42);
	printf("MINE: %i\nREAL: %i\n", res, res2);

	printf(RESET"\n");
	ft_printf("----------- HEXA ------------\n");

	res2 = printf("|%#5.6x|\n", 42);
	printf("RESULT: %i\n", res2);

	

	//ft_putnbr_fd(abs(INT_MIN), 1);
	/*int	test = ft_atoi(av[1]);
	printf("RESULT : nbr = %i, len = %li\n", test, ft_nbrlen(test));*/
	
	return (0);
}
