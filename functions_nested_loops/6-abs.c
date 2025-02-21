#include "main.h"
#include <stdio.h>
/**
 * _abs - Computes the absolute value of an integer.
 * @n: The integer to compute the absolute value of.
 *
 * Description: This function takes an integer as input and returns its
 * absolute value. If the integer is negative, it returns the positive
 * equivalent by multiplying it by -1. If the integer is already positive
 * or zero, it returns the integer as is.
 *
 * Return: The absolute value of the input integer.
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);

	else
	return (n);
}
