/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stelie <stelie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 14:46:48 by stelie            #+#    #+#             */
/*   Updated: 2020/02/06 16:02:13 by stelie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	main(void)
{
	char *s = NULL;
	
	//printf("REAL : %i ", printf("%s\n", s));
	ft_printf("Catalogue de %fringues");
	printf("Taille = %i", printf("Catalogue de \n"));
	return (0);
}