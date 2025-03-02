#include "main.h"
/**
 * leet - function that encodes a string
 *@s: string
 * Return: s's value
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
