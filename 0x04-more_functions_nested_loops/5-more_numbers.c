#include "main.h"
#include <stdio.h>
/**
 * more_numbers - prints more numbers
 * Return: always 0
 */

void more_numbers(void)
{
	int i = 1;
	int j;

	while (i <= 10)
	{
		for (j = 0 ; j <= 14 ; j++)
		{
			if (j >= 10) 
			{
				_putchar('0'+ j / 10);
				_putchar('0' + j % 10);
			}
			else
			{
				_putchar(j + '0');
			}
		}
	i++;
	_putchar('\n');
	}
}
