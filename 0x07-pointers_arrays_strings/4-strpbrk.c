#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - search for string
 * @s: first parameter
 * @accept: second parameter
 * Return: Null
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *p = accept;

		while (*p != '\0')
	{
		if (*s == *p)
		{
			return (s);
		}
	p++;
	}
	s++;
	}
	return (NULL);
}
