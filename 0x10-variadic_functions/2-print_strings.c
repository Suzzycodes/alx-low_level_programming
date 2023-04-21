#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - function to print strings
 * @separator: our separator
 * @n: parameter 1
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(args, char *);
	if (str == NULL)
	{
		printf("(nil)");
	} else
	{
		printf("%s", str);
	}
	if (i < n - 1 && separator != NULL)
	{
		printf("%s", separator);
	}
	}

	va_end(args);
	printf("\n");
}