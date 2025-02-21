#include "main.h"
#include <stdio.h>
/**
 * _islower - Checks if a character is lowercase.
 * @c: The character to check.
 *
 * Description: This function takes a character as input and checks if it
 * is a lowercase letter, meaning it is between 'a' and 'z' (inclusive).
 * If the character is lowercase, the function returns 1. Otherwise, it
 * returns 0.
 *
 * Return: 1 if the character is a lowercase letter, otherwise returns 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
