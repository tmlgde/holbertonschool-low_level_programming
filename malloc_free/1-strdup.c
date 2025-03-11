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
char *_strdup(char *str)
{
	int i;
	char *copie;

	if (*str == 0)
	{
		return (NULL);
	}

	copie = malloc(strlen(str) + 1);

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
