Pour l'instant, on recupere les flags et les conversions sans probleme.


12 MARS 2020 : 
- Correction de la precision qui n'etait pas prise en compte dans le cas ou
	la taille de cette derniere est de 1 a 9 (souci de obj->idx++ en trop).
- Ajout de ft_write_di_w_min.
- Separation pour les "d/i" en deux : IF (!obj->prec) / else
- Pour finir "d/i", manque le cas ou width+prec et width+prec+minus