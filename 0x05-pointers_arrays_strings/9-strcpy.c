#include "main.h"
#include <stddef.h>
/**
 * _strcpy - copy a string
 * @dest: parameter one
 * @src: parameter two
 * Return: return dest here
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0 ; src[i] != '\0' ; i++)
		dest[i] = src[i];
	return (dest);
}
