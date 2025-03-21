#ifndef MYHEADER_H
#define MYHEADER_H

#include <stdio.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
int _putchar(char c);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
typedef struct printer
{
	char type;
	void (*func)(va_list args, char *separator);
} printer_t;
#endif
