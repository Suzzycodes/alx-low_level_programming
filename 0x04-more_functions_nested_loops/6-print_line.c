#include "main.h"
/**
 * print_line - print a long line
 * @n: number of times to print n
 * Return: alwsys 0
 */

void print_line(int n)
{
	for (n = 0 ; n <= 10 ; n++)
		_putchar('_');
	if (n <= 0)
		_putchar('\n');
	else
		_putchar('_');
_putchar('\n');
}
