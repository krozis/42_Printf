Pour l'instant :

- ouvre la list
- parcours la const char* "format" et l'ecrit
- si tombe sur un %, elle enregistre les flags et le type de conversion
	et remonte les erreurs si il y en a.
- char conv : OK
- string conv : OK
- i & d conv : OK
- u : OK
- x & X : OK
- p : OK

- Mise a la norme (ft_tools, header) : TO DO
- Makefile : to do

## MAINTENANT QU'ON A LE FID, ON DOIT L'ECRIRE SELON LE TYPE DE CONV et SELON LES FLAGS.	


- La fonction a bien pris en compte la taille du "%flag/conv" et on se retrouve bien apres
- La fonction ferme la list
- La fonction renvoie correctement (pour l'instant) le nombre de characteres ecrits.
