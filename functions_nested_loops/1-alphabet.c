#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - Prints the lowercase alphabet followed by a new line.
 *
 * Description:
 * This function uses a loop to iterate through the lowercase alphabet,
 * starting from 'a' to 'z', and prints each character using the _putchar
 * function. After printing all the letters, it prints a newline character
 * to move to the next line.
 *
 * No return value is expected as the function is of type void.
 */

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);

	}
	_putchar('\n');
}
