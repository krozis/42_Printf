## Progress :

- Makefile : OK for now
- Arbo : 
	- NEW
		- includes
			- ft_printf.h
		- src
			- 42_Libft/
			- ft_printf.c
	- Makefile

1) Commencer par la fonction principale qui redirige des qu'elle tombe sur un `%`.
2) Gerer le `%%` direct pour pouvoir tester l'affichage ET la valeur de retour.
3) Commencer par la conv `c`.


## mandatory flags : 
	- **`%c`**	*(imprime un seul caractère.)*
	- **`%s`**	*(imprime une chaîne de caractères.)*
	- **`%p`**	*(L’argument de pointeur void \* est imprimé en hexadécimal.)*
	- **`%d`**	*(imprime un nombre décimal (base 10).)*
	- **`%i`**		*(imprime un entier en base 10.)*
	- **`%u`**	*(imprime un nombre décimal non signé (base 10).)*
	- **`%x`**	*(imprime un nombre en hexadécimal (base 16) avec lettres en minuscule.)*
	- **`%X`**	*((imprime un nombre en hexadécimal (base 16) avec lettres en MAJUSCULE.)*
	- **`%%`**	*(imprime un signe de pourcentage..)*
