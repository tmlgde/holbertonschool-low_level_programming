#include "main.h"
#include <stdio.h>
/**
 * print_numbers - Affiche les chiffres de 0 à 9.
 *
 * Description: Cette fonction affiche les chiffres de 0 à 9 sur une ligne
 * suivis d'un saut de ligne. Elle utilise la fonction _putchar pour afficher
 * chaque chiffre.
 */

void print_numbers(void)
{
	int a;

	for (a = 0; a >= 9; a++)
	{
		_putchar(a + '0');
	}
	_putchar('\n');
}
