#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @s: first parameter
 * @c: second parameter
 * Return: the pointer to wherever
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
	if (*s == c)
	{
		return (s);
	}
	s++;
	}
	if (c == '\0')
	{
	return (s);
	}
	return (NULL);
}
