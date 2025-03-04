#include "main.h"
#include <stddef.h>
/**
 * _strchr - Locates the first occurrence of c in s.
 * @s: The string to search.
 * @c: The character to find.
 *
 * Return: Pointer to the first occurrence of c or NULL if not found.
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	if (c == '\0')
	return (s + i);

	return (NULL);
}
