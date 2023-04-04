#include "main.h"
#include <stddef.h>
/**
 * _strstr - locate a substring
 * @haystack: first parameter
 * @needle: second parameter
 * Return: empty
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
	char *p = haystack;
	char *q = needle;

	while (*q != '\0' && *p == *q)
	{
		p++;
		q++;
	}
	if (*q == '\0')
	{
		return (haystack);
	}
	haystack++;
	}
	return (NULL);
}
