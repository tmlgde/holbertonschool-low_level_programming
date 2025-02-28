#include "main.h"
#include <stdio.h>
/**
 * _strcpy - Copie la chaîne de caractères pointée par src vers dest.
 * @dest: Pointeur vers le buffer de destination où la chaîne sera copiée.
 * @src: Pointeur vers la chaîne source à copier.
 *
 * Cette fonction copie les caractères de la chaîne src dans la chaîne dest,
 * y compris le caractère de fin de chaîne '\0'. Elle retournn pointeurve
 * la chaîne destination (dest).
 *
 * Retourne: Le pointeur vers dest, qui contient la chaîne copiée.
 * Cela permet à l'appelant de continuer à utiliser ou manipuler la chaîne
 * copiée dans dest après l'appel de la fonction.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
