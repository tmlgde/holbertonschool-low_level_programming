#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strlen - Calcule la longueur d'une chaîne de caractères.
 *
 * @s: La chaîne à mesurer.
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

/**
 * str_concat - Concatène deux chaînes de caractères.
 *
 * @s1: Première chaîne à concaténer.
 * @s2: Deuxième chaîne à concaténer.
 *
 * Return: Un pointeur vers la nouvelle chaîne concatén� NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *nvlchaine;
	unsigned int i;
	unsigned int j;

	if (!s1)
	{
		s1 = ("");
	}

	if (!s2)
	{
		s2 = ("");
	}

	nvlchaine = malloc(_strlen(s1) + _strlen(s2) + 1);
	if (!nvlchaine)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		nvlchaine[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++, i++)
	{
		nvlchaine[i] = s2[j];
	}
	nvlchaine[i] = '\0';
	return (nvlchaine);
}
