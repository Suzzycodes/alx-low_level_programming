#include "main.h"
/**
 * _isupper - checks for uppercase
 *
 * @c: paramter to be printed
 * Return: 1 if uppercase and 0 if otherwise
 */


int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
