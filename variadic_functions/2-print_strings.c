#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - Affiche les chaînes de caractères avec un séparateur.
 * @separator: Séparateur entre les chaînes.
 * @n: Nombre de chaînes.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arguments;
	char *str;

	va_start(arguments, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(arguments, char *);

		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(arguments);
	printf("\n");
}
