#include "main.h"
#include <stdio.h>

/**
 * _strchr - Locates a character in a string.
 * @s: String.
 * @c: Character.
 *
 * Return: Pointer to first occurrence of c or NULL.
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		if (c == '\0')
		{
		return (s + i);
		}
		i++;
	}
	return (NULL);
	}
