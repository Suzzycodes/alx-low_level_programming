#include "main.h"
/**
 * helperFunction - returns 0 or 1
 * @num: our number
 * @i: possible factor
 * Return: 0 if not prime, 1 if prime
 */
int helperFunction(int num, int i)
{
	if (i < num)
	{
		if (num % i == 0)
		{
			return (0);
		}
		else
		{
			return (helperFunction(num, i + 1));
		}
	}
	else
	{
		return (1);
	}
return ('\n');
}

/**
 * is_prime_number - checks for prime number
 * @n: our parameter
 * Return: 1 if prime or 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (helperFunction(n, 2));
	}
return ('\n');
}
