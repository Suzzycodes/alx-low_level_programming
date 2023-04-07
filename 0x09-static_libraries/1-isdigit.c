#include "main.h"
/**
 * _isdigit - checks for digit
 *
 * @c: paramter to be checked
 * Return: 1 if digit and 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= 49 && c <= 57)
		return (1);
	else
		return (0);
}
