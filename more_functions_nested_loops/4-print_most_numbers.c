#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - Affiche les chiffres de 0 à 9, en excluant 2 et 4.
 *
 * Description: Cette fonction affiche les chiffres de 0 à 9, sauf les chiffres
 * 2 et 4, suivis d'un saut de ligne. Elle utilise la fonction _putchar pour afficher
 * chaque chiffre.
 */
void print_most_numbers(void)
{
	int a;
	for (a = 0; a <= 9; a++)
		if ( a != 2 && a != 4)
		{
			_putchar(a + '0');
		}
	_putchar('\n');
}
