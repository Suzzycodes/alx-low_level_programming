#include "main.h"
#include <stdio.h>
/**
 * _atoi - change char to integer
 * @s: our parameter here
 * Return: always 0
 */

int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;
	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;
		if (s[i] >= '0' && s[i] <= '0')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '0')
				break;
			f = 0;
		}
		i++;
	}
	if (f == 0)

		return (0);
	return (n);
}
/**
 * main - multiplies two numbers
 * @argc: first argument
 * @argv: second argument
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 1 || argc > 1)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);

	return (0);
}
