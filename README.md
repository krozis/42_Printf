
# 42_Printf

Project Ft_printf in 42 Cursus.

  

"La versatilité de printf en C représente un bon exercice de programmation pour nous.

Ce projet est d’une difficulté modérée. Il vous permettra d’utiliser les kwargs en C La clé de la réussite pour ft_printf est un code bien structuré et extensible."

  --------------------------------

## Rules

  

- Norm OK

- No segfault, no bus error, no double free or leaks.

- name : **libftprintf.a**

- Makefile needed : YES -> all, clean, fclean, re, bonus

- Allowed functions : malloc, free, write, va_start, va_arg, va_copy, va_end

- Libft : Allowed

- Prototype :   **`int ft_printf(const char *, ...);`**

## Mandatory Part

- librairy must be created with `ar`, not `libtool`.
- No need to do the buffer management.
- mandatory flags : 
	- **`%c`**	*(imprime un seul caractère.)*
	- **`%s`**	*(imprime une chaîne de caractères.)*
	- **`%p`**	*(L’argument de pointeur void \* est imprimé en hexadécimal.)*
	- **`%d`**	*(imprime un nombre décimal (base 10).)*
	- **`%i`**		*(imprime un entier en base 10.)*
	- **`%u`**	*(imprime un nombre décimal non signé (base 10).)*
	- **`%x`**	*(imprime un nombre en hexadécimal (base 16) avec lettres en minuscule.)*
	- **`%X`**	*((imprime un nombre en hexadécimal (base 16) avec lettres en MAJUSCULE.)*
	- **`%%`**	*(imprime un signe de pourcentage..)*


## Bonus Part

- all combinations of the flags **`-0.`**
- **`#`**	*(Usage variant en fonction de ce aui suit, ici on utilisera `%#x` et `%#X` uniquement.)*
- **`space`**	*(Les valeurs positives commencent par un espace.)
- **`+`** 	*(imprime le signe des nombres positifs.)*
- *minimum width with ALL the conversions*

## Not in project flags

- **`%o`**	*(imprime un nombre en octal.)*
- **`%f`**	*(imprime un double.)*
- **`%e`** et **`%E`**	*(imprime un double.)*
- **`%g`** et **`%G`**	*(imprime un double.)*
- **`n`**	*(imprime le nombre de caracteres imprimes par printf.)* (pas d'argument attendu)

## Helping tools
	
- https://man7.org/linux/man-pages/man3/stdarg.3.html
- 

- Pointeurs sur fonctions ?

- http://manpagesfr.free.fr/man/man3/printf.3.html
- https://linux.die.net/man/3/printf