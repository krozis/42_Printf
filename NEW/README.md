## Progress : ##

- Makefile : OK for now

- Arbo :

	- NEW

		- includes

		- ft_printf.h

		- src

- 42_Libft/

	- ft_printf.c

	- Makefile

------

 - [ ] Commencer par la fonction principale qui redirige des qu'elle tombe sur un `%`.

 - [ ] Gerer le `%%` direct pour pouvoir tester l'affichage ET la valeur de retour (le nb total de char imprimes a l'ecran, incluant les \n etc..).

 - [ ] Commencer par la conv `c`.

## Notes ##

  

#### ORDER ####

  

| % | Flags | Minimum field width | Period | Precision. Maximum field width | Argument type |
|--|--|--|--|--|--|
| Required | Optional | Optional | Optional | Optional | Required |

  

####  `c`  ####

compatible avec:

- left justify (%-)

- min width ( %5c)

- les deux a la fois

incompatible avec:

- precision (.5)

- '#'

- '+'

- ' ' (blank)

- '0'

  

####  `s`  ####

compatible avec:

- min width (%5s)

- precision (%.5s)

- les deux a la fois

- left justify (%-)

  

incompatible avec:

- '+'

- '#'

- ' ' (blank)

- '0'

  
  
  
  
  

## mandatory flags :

- **`%c`** *(imprime un seul caractère.)*

- **`%s`** *(imprime une chaîne de caractères.)*

- **`%p`** *(L’argument de pointeur void \* est imprimé en hexadécimal.)*

- **`%d`** *(imprime un nombre décimal (base 10).)*

- **`%i`** *(imprime un entier en base 10.)*

- **`%u`** *(imprime un nombre décimal non signé (base 10).)*

- **`%x`** *(imprime un nombre en hexadécimal (base 16) avec lettres en minuscule.)*

- **`%X`** *((imprime un nombre en hexadécimal (base 16) avec lettres en MAJUSCULE.)*

- **`%%`** *(imprime un signe de pourcentage..)*