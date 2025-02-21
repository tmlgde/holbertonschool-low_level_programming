#include "main.h"
#include <stdio.h>
/**
 * print_sign - Prints the sign of a number.
 * @n: The number to check.
 *
 * Description: This function takes an integer as input and checks if it is 
 * positive, negative, or zero. It prints the appropriate sign ('+', '-', or '0')
 * based on the value of the number and returns 1 for positive, -1 for negative, 
 * and 0 for zero.
 *
 * Return: 1 if the number is positive, -1 if the number is negative, 
 *         0 if the number is zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return(0);
	}
}
