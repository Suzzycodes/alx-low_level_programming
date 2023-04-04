#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - print the chessboard
 * @a: parameter to be used
 * Return: always 0
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
	for (j = 0; j < 8; j++)
	{
		_putchar("%c ", a[i][j] + '0');
	}
	_putchar('\n');
	}
}
