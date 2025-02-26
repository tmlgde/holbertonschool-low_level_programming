#include "main.h"
#include <stdio.h>

/**
 * print_rev - Affiche une chaîne de caractères en sens inverse.
 * @s: La chaîne de caractères à afficher en sens inverse.
 *
 * Description: Cette fonction prend une chaîne de caractères et l'affiche
 * caractère par caractère en sens inverse. Elle utilise deux boucs
 * `for` pour parcourir la chaîne et l'afficher dans l'ordre inverse.
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	{
		for (i--; i >= 0; i--)
		{
			_putchar(s[i]);
		}
		_putchar('\n');
	}
}
