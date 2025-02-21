#include "main.h"
#include <stdio.h>
/**
 * _isalpha - Checks if a character is an alphabetic letter.
 * @c: The character to check.
 *
 * Description: This function takes a character as input and checks if it
 * is an alphabetic letter. It considers both uppercase ('A' to 'Z')
 * and lowercase ('a' to 'z') letters as valid. If the character is an
 * alphabetic letter, the function returns 1. Otherwise, it returns 0.
 *
 * Return: 1 if the character is an alphabetic letter, otherwise returns 0.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
