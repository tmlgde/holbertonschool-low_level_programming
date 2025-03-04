#include "main.h"
#include <stdio.h>
/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to search.
 * @accept: The set of characters to match.
 *
 * Return: The number of bytes in the initial segment of s
 *         that consist only of bytes from accept.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
	{
			if (s[i] == accept[j])
				return (s + i);
				}
	}
	return (NULL);
}
