#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	va_list args;
	char *str;

    va_start(args, format);

	while (format && format[i])
	{

	if (format[i] == 'c')
		printf("%c", va_arg(args, int));
	else if (format[i] == 'i')
		printf("%d", va_arg(args, int));
	else if (format[i] == 'f')
		printf("%f", va_arg(args, double));
	else if (format[i] == 's')
	{
		str = va_arg(args, char *);
	    if (str)
		    printf("%s", str);
	    else
                printf("(nil)");
	}

        if (format[i + 1] != '\0' && (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's'))
            printf(", ");

        i++;
    }

    va_end(args);

    printf("\n");
}
