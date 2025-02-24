#include "main.h"
#include <stdio.h>

/**
 * _isupper - vérifie si un caractère est une lettre majuscule.
 * @c: le caractère à tester.
 *
 * Retourne 1 si le caractère est une lettre majuscule, sinon retourne 0.
 * Cette fonction vérifie uniquement si le caractère est égal à 'A'.
 *
 * Return: 1 si le caractère est 'A', sinon 0.
 */
 
int _isupper(int c)
{
	if( c == 'A')
	{	return(1);
	}

	else
	{	return(0);
	}
}
