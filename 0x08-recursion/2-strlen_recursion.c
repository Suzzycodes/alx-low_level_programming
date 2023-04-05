#include "main.h"
/**
 * _strlen_recursion - count length of string
 * @s: our parameter here
 * Return: void
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
