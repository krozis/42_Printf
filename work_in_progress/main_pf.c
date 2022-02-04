/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_pf.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krozis <krozis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 13:51:26 by stelie            #+#    #+#             */
/*   Updated: 2022/01/22 15:13:19 by krozis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>



int	main(void)
{
	char	*str =  "testbug";
	char	c = 'F';
	int		res = 1;
	int		res2 = 3;

	ft_printf("-----------  CHAR  -------------\n");
	res = ft_printf("%%c     = |%c|\n", c);
	res2 =   printf("%%c     = |%c|\n", c);
	printf("MINE: %i\nREAL: %i\n", res, res2);

	res = ft_printf("%%10c     = |%10c|\n", c);
	res2 =   printf("%%10c     = |%10c|\n", c);
	printf("MINE: %i\nREAL: %i\n", res, res2);

	res = ft_printf("%%-10c     = |%-10c|\n", c);
	res2 =   printf("%%-10c     = |%-10c|\n", c);
	printf("MINE: %i\nREAL: %i\n", res, res2);

	res = ft_printf("%%-c     = |%-c|\n", c);
	res2 =   printf("%%-c     = |%-c|\n", c);
	printf("MINE: %i\nREAL: %i\n", res, res2);

	ft_printf("----------- STRINGS ------------\n");

	res = ft_printf("%%s    = |%s|\n", str);
	res2 =   printf("%%s    = |%s|\n", str);
	printf("MINE: %i\nREAL: %i\n", res, res2);

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


	
	/*res = res = ft_printf("Coucou !!! |%8.5s|\n", "testbug");
	printf("MINE: %i\n", res);
	res = res = ft_printf("Coucou !!! |%8.5s|\n", "testbug");
	printf("REAL: %i\n", res);*/
	
	return (0);
}
