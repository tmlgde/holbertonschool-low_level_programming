#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strlen - Retourne la longueur d'une chaîne de caractères.
 *
 * @s: Pointeur vers la chaîne de caractères.
 *
 * Return: La longueur de la chaîne (nombre de caractères avant le '\0').
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	;

	return (i);
}
/**
 * _strdup - Crée une copie dynamique d'une chaîne.
 *
 * @str: La chaîne à copier.
 *
 * Return: Un pointeur vers la copie, ou NULL en cas d'échec.
 */

char *_strdup(char *str)
{
	int i;
	char *copie;

	if (str == 0)
	{
		return (NULL);
	}

	copie = malloc(_strlen(str) + 1);

	if (copie == 0)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		copie[i] = str[i];
	}

	copie[i] = '\0';

return (copie);
}
