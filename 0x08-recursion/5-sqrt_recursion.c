#include "main.h"
#include "math.h"
/**
 * helperFunction - checks for square root
 * @num: first parameter
 * @pSqrt: second parameter
 * Return: sqrt of number and -1 for error
 */
int helperFunction(int num, int pSqrt)
{
	if ((pSqrt * pSqrt) == num)
	{
		return (pSqrt);
	}
	else
	{
		if ((pSqrt * pSqrt) > num)
			return (-1);
		else
			return (helperFunction(num, pSqrt + 1));
	}
}

/**
 * _sqrt_recursion - return square root
 * @n: our parameter
 * Return: squareroot of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (helperFunction(n, 0));
}
