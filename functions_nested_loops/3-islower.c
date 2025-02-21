#include "main.h"
#include <stdio.h>
/**
 * _islower - Vérifie si un caractère est en minuscule.
 * @c: Le caractère à vérifier.
 *
 * Description : Cette fonction prend un caractère en entrée et vérifie s'il
 * est compris entre 'a' et 'z' (inclus), ce qui signifie qu'il s'agit d'une
 * lettre minuscule. Si c'est le cas, la fonction retourne 1, sinon elle retourne 0.
 * 
 * Retourne : 1 si le caractère est une lettre minuscule, sinon 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
