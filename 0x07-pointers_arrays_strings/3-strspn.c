#include "main.h"
/**
 * _strspn - get length of blablabla
 * @s: first parameter
 * @accept: second parameter
 * Return: return count here
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int match;

	while (*s != '\0')
	{
	match = 0;
	while (*accept != '\0')
	{
	if (*s == *accept)
	{
	count++;
		match = 1;
		break;
	}
	accept++;
	}
	if (match == 0)
	{
	return (count);
	}
	s++;
	accept = accept - count;
	}
	return (count);
}
