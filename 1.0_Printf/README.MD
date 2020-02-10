_____________________________________________
											
				FT_PRINTF
			Journal de bord						
											
_____________________________________________

Dimanche 09/02:

	Pour le moment c'est le début, j'ai pas grand chose. J'ai fait un Trello pour ce projet, en plus de ce journal.
	J'ai un début de Makefile mais honnêtement, c'est de la merde.
	J'ai récupéré ma libft mais il lui manque quelques petits ajouts.
	Actuellement je bosse sur un convert_base, à ajouter à ma libft. Il se limitera aux unsigned int pour le moment.

	J'ai terminé la sous-fonction qui check si la base est valide (pas de non-printable, pas de '-' ou '+', taille minimum de 2 et pas de doublon dans les caractères de la base).
	J'ai terminé la sous-fonction qui check si un nombre donné est bien dans la base donnée. 
	Ces deux sous-fonctions ont leur propre fichier cb_check.c (rien à voir avec les cartes bleues).

	J'ai fini aussi la fonction cb_index, qui renvoie la place du caractère dans sa base (ex A en hexa est à l'index 10, et F vaut 15)

	--- Il faudra, afin de faire plus propre, au moment de l'incorporer à la libft, que je lui laisse son header perso.

_____________________________________________

Lundi 10/02:

	Fonction power faite. J'ai utilisé la version itérative, qui semble utiliser moins de puissance de calcul. J'ai également décidé d'utiliser des long en entrée et de return un unsigned int.

	Fonction to_base_10 faite, je la fais non sécurisée pour le moment. Pour l'instant je return un unsigned int.
	--- A faire plus tard pour la rendre utilisable ailleurs (cas des nombres negatifs, base et/ou nbr vide).

	Terminé pour le convert, j'ai encore du mal avec la fonction "itoa_base", j'ai de nouveau du utiliser la méthode que j'ai utilisé en piscine et ça ne me convient guère.
	
	J'ai mis mon convert_base dans la libft directement et le Makefile de ce dernier est à jour. Je trouve ça moyennement propre, cependant.
