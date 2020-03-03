/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_tests.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stelie <stelie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 13:45:49 by stelie            #+#    #+#             */
/*   Updated: 2020/02/05 11:20:11 by stelie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include "includes/libft.h"

void	test(char *phrase, ...)
{
	int somme = 0;
	va_list ap;
	
}

int		main(void)
{
	test("La somme vaut :", 1, 2, 3, 6, 12);
	return (0);
}
