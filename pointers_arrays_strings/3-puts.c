#include "main.h"
#include <stdio.h>
/**
 * _puts - Affiche une chaîne de caractères suivie d'un saut de ligne.
 * @str: Pointeur vers la chaîne de caractères à afficher.
 *
 * Description: Cette fonction prend une chaîne de caractères en paramètre
 * et l'affiche caractère par caractère, puis ajoute un saut de lign�la fin.
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
