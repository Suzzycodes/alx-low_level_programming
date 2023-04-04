#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print sum of two diagonals
 * @a: first parameter
 * @size: second parameter
 * Return: always 0
 */

void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
	sum1 += *(a + i * size + i);
	sum2 += *(a + i * size + (size - i - 1));
	}
	printf("%d\n", sum1);
	printf("%d\n", sum2);
}
