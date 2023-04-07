#include "main.h"
/**
 * _strlen - function for counting length of string
 * @s: parameter to be used
 * Return: count of string
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0 ; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
