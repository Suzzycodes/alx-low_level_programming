#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: para 1
 * @size: para 2
 * @cmp: para 3
 * Return: -1 or i or -1 again
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
	if (cmp(array[i]) != 0)
	{
		return (i);
	}
	}
	return (-1);
}
