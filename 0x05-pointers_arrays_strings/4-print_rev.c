#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: parameter to be used
 */

void print_rev(char *s)
{
	int i;
	int count = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		count++;
	for (i = count ; i >= 0 ; i--)
	{
		_putchar(s[i]);
		if (i == 0)
			_putchar('\n');
	}
	_putchar('\n');
}
