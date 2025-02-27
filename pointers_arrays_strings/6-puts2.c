#include "main.h"
#include <stdio.h>
/**
 * puts2 - Affiche chaque deuxième caractère d'une chaîne de caractères.
 * @str: Pointeur vers la chaîne de caractères à afficher.
 *
 * Cette fonction parcourt la chaîne et affiche les caractères situés
 * à des indices pairs, puis imprime un saut de ligne à la fin.
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
