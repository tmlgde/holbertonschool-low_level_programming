#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - Alloue de la mémoire et vérifie si l'allocation réussit.
 * @b: Nombre d'octets à allouer.
 *
 * La fonction alloue `b` octets avec `malloc`. Si l'allocation échoue,
 * le programme se termine avec le code d'erreur 98.
 *
 * Retour : Pointeur vers la mémoire allouée ou exit(98) en cas d'échec.
 */
void *malloc_checked(unsigned int b)
{
	char *gigi;

	gigi = malloc(b);

	if (!gigi)
	{
		exit(98);
	}
	return (gigi);
}
