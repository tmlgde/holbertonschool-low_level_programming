#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - Affiche les nombres séparés par un séparateur.
 * @separator: Séparateur entre les nombres.
 * @n: Nombre de paramètres.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arguments;

	if (n == 0)
	{
		return;
	}

	va_start(arguments, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arguments, int));
	if (separator != NULL && i < n - 1)
		printf("%s", separator);
	}
	va_end(arguments);
	printf("\n");

}
