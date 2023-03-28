#include "main.h"
/**
 * _puts - prints the string and a new line
 * @str: our parameter here
 * Return: always 0 here
 */

void _puts(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
