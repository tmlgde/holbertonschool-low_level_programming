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
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int count = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
			if (accept[j] == '\0')
			{
				break;
			}
	}
	return (count);

}
