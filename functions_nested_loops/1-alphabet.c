#include "main.h"
#include <stdio.h>
/**
 * print_alphabet: imprimer l'alphabet grace a la fonction
 *
 */

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);

	}
	_putchar('\n');
}
