#include "main.h"
/**
 * _memset - fill memeory with constant byte
 * @s: first parameter
 * @b: second parameter
 * @n: third parameter
 * Return: send the pointer to memeory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
