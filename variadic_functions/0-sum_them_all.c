#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * sum_them_all - Calcule la somme de tous les paramètres.
 * @n: Le nombre d'arguments.
 *
 * Return: La somme des arguments, ou 0 si n est 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list arguments;

	if (n == 0)
	{
		return (0);
	}
	
	va_start(arguments, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(arguments, int);
	}

	va_end(arguments);

	return (sum);
}
