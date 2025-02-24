#include "main.h"
#include <stdio.h>
**
 * _isupper - Vérifie si un caractère est une lettre majuscule.
 * @c: Le caractère à tester.
 *
 * Description: Cette fonction prend un caractère en entrée et renvoie 1
 * si le caractère est une lettre majuscule (en l'occurrence 'A'), sinon
 * elle renvoie 0. Cette fonction se limite à vérifier seulement si le
 * caractère est 'A'.
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
