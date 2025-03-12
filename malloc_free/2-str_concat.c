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
 * Return: Un pointeur vers la nouvelle chaîne concaténée, ou N
 */

char *str_concat(char *s1, char *s2)
{
	char *nvlchaine;
	int i;
	int j;

	if (!s1)
	{
		s1 = ("");
	}

	if (!s2)
	{
		s1 = ("");
	}

	nvlchaine = malloc(_strlen(s1) + _strlen(s2) + 1);
	if (nvlchaine == 0 );
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
