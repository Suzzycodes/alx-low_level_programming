#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * create_array - lets create an array of chars
 * @size: first parameter
 * @c: second parameter
 * Return: the string
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
