#include "main.h"
#include <stdio.h>
/**
 * _strlen - Calcule la longueur d'une chaîne de caractères.
 * @s: La chaîne de caractères dont la longueur doit être calculée.
 *
 * Description: Cette fonction prend une chaîne de caractères en entr
 * et retourne sa longueur, c'est-à-dire le nombre de caractères avt
 * le caractère de fin de chaîne (`\0`).
 *
 * Return: La longueur de la chaîne.
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	;

	return (i);
}
