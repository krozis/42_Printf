/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krozis <krozis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 08:49:18 by krozis            #+#    #+#             */
/*   Updated: 2022/01/21 15:58:36 by krozis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	char *str =  "testbug";

	printf("%%s     = |%s|\n", str);
	printf("%%-s    = |%-s|\n", str);
	printf("%%4s    = |%4s|\n", str);
	printf("%%10s   = |%10s|\n", str);
	printf("%%.5s   = |%.5s|\n", str);
	printf("%%.10s  = |%.10s|\n", str);
	printf("%%-.5s  = |%-.5s|\n", str);
	printf("%%-10s  = |%-10s|\n", str);
	printf("%%10.5s = |%10.5s|\n", str);
	printf("%%5.10s = |%5.10s|\n", str);
	printf("%%5.6s  = |%5.6s|\n", str);
	//printf("%%s = |%s|", str);
	
	return (0);
}