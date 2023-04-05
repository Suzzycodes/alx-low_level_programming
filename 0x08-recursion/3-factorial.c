#include "main.h"
/**
 * factorial - return factorial of a number
 * @n: our parameter
 * Return: void
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}

