#include "main.h"
/**
 * _abs - compute value of integer
 *
 * @a: parameter to be checked
 *
 * Return: always 0
 */

int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
