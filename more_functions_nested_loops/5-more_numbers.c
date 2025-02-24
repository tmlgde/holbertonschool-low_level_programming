#include "main.h"
#include <stdio.h>

/**
* more_numbers - Affiche les chiffres de 0 à 14, 10 fois.
*
 * Description: Cette fonction affiche les chiffres de 0 à 14, 10 fois,
 * chaque fois suivis d'un saut de ligne. Elle utilise la fonction _putchar
 * pour afficher chaque chiffre un par un.
 */

void more_numbers(void)
{
	int a;
	int b;

		for (a = 0; a < 10; a++)
	{
		for (b = 0; b <= 14; b++)
	{
		if (b >= 10)
		{
			_putchar((b / 10) + '0');
		}
		_putchar((b % 10) + '0');
	}

	putchar('\n');
	}
}

