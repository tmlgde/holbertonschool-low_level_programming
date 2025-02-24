#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Vérifie si un caractère est un chiffre.
 * @c: Le caractère à tester.
 *
 * Cette fonction vérifie si le caractère passé en paramètre est un chiffre
 * (compris entre '0' et '9'). Elle retourne 1 si c'est le cas, sinon elle
 * retourne 0.
 *
 * Return: 1 si le caractère est un chiffre, sinon 0.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
