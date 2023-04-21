#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - function to print all
 * @format: the format for printing
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char *s;
	int i;
	float f;
	char c;
	int j = 0;

	va_start(args, format);

	while (format && format[j])
	{
	switch (format[j])
	{
		case 'c':
		c = (char) va_arg(args, int);
		printf("%c", c);
		break;
		case 'i':
		i = va_arg(args, int);
		printf("%d", i);
		break;
		case 'f':
		f = (float) va_arg(args, double);
		printf("%f", f);
		break;
		case 's':
		s = va_arg(args, char *);
		if (s == NULL)
		{
			printf("(nil)");
		} else
		{
			printf("%s", s);
		}
		break;
		default:
		break;
	}

		if (format[j + 1] && (format[j] == 'c' || format[j] == 'i' || format[j] == 'f' || format[j] == 's'))
		{
			if (format[j] == 'c' || format[j] == 'i' || format[j] == 'f')
			{
				printf(", ");
			} else
			{
				printf("%s", ", ");
			}
		}
		j++;
		}

		printf("\n");
		va_end(args);
}
