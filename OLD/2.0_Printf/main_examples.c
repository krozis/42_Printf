/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_examples.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stelie <stelie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 09:39:57 by stelie            #+#    #+#             */
/*   Updated: 2020/02/15 09:20:17 by stelie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include "includes/convert_base.h"

int		main(void)
{
	char			c = 'c';
	char			*s = "Ceci est une chaine de caractères";
	int				i = 2147483647;
	unsigned int	u = 00;
	unsigned int	hexa = 2309737967;
	float			f = 42.41;
	
	printf("%d\n", printf("Hello %S %s this %5ls is big %-S", L"Tim®", " arg ", L"this\0is", L"Ω≈ç√∫˜µ"));
	/*
	printf("--------------------------------------\n");
	printf("FLAGS OBLIGATOIRES : c s p d i u x X %%\n--------------------------------------\n\n");
	printf("c : caractère simple (char).\n -> ex: Le char suivant est un %c\n", c);
	printf("s : chaine de caractère (char *).\n -> ex: %s.\n", &c);
	printf("p : pointeur (void *) affiché en hexadécimal.\n -> ex: Le pointeur sur s = %p\n", s);
	printf("d : entier signé (int).\n\n -> ex: %d est un entier.\n\n", i);
	printf("i : entier signé (int).\n -> ex: %24i est un entier.\n", i);
	printf("u : entier non signé (unsigned int).\n -> ex: %u est un entier non signé.\n", u);
	printf("x : entier hexadecimal.\n  -> ex: %x est un hexadecimal.\n", hexa);
	printf("X : entier hexadecimal.\n  -> ex: %X est un hexadecimal.\n", hexa);
	printf("\n------------------------------------\n");
	printf("FLAGS OPTIONNELS : n f g e l ll h hh \n------------------------------------\n\n");
	printf("n : Compte les caractères le précedant et les mets dans un int dont on fournit l'adresse.\n");
	printf(" -> ex: \"%s\"%n", s , &i);
	printf(" (qui contient %i caractères).\n", i);
	printf("f : nombre décimal (float).\n -> ex: %f est un float.\n", f);
	printf("g : ?nombre a notation scientifique.\n -> ex: %g est un nombre.\n", f);
	printf("e : %.o ?\n", u);
	printf(NULL);
	
	
	printf("\n---------\nFIN\n----------\n");
	*/
	return (0);
}