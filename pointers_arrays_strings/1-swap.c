#include "main.h"
#include <stdio.h>
/**
 * swap_int - Échange les valeurs de deux entiers.
 * @a: Pointeur vers le premier entier à échanger.
 * @b: Pointeur vers le deuxième entier à échanger.
 *
 * Description: Cette fonction prend deux pointeurs vers des entiers et
 * échange leurs valeurs. La valeur pointée par `a` sera échan
 * avec b
 * la valeur pointée par `b` à l'aide d'une variable temporaire.
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
