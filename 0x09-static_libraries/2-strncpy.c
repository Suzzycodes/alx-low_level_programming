#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: first parameter
 * @src: second parameter
 * @n: third parameter
 * Return: the copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i <= n ; i++)
		dest[i] = src[i];
	return (dest);
}
