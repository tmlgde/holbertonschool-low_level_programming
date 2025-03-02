#include "main.h"
/**
 * leet - Remplace certaines lettres par des chiffres dans une chaîne.
 * @str: La chaîne à modifier.
 *
 * Return: La chaîne modifiée.
 */

char *leet(char *str)
{
	int i, j;

	char *letters = "aeotlAEOTL";

	char *numbers = "4307143071";

	for (i = 0; str[i]; i++)
	{
		for (j = 0; letters[j]; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = numbers[j];
			}
		}
	}
	return (str);
}
