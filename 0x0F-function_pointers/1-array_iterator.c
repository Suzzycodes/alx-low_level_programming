#include "function_pointers.h"
/**
 * array_iterator - execute a function
 * @array: para 1
 * @size: para 2
 * @action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

