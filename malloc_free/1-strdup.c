#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - Crée une copie dynamique d'une chaîne de caractères.
 *
 * @str: La chaîne à dupliquer.
 *
 * Return: Un pointeur vers la copie de la chaîne, ou NULL si échec.
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	;

	return (i);
}

char *_strdup(char *str)
{
	int i;
	char *copie;

	if (*str == 0)
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
