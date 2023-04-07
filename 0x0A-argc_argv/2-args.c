#include "main.h"
#include <stdio.h>
/**
 * main - our function that prints all arguments it receives
 * @argc: our argument count
 * @argv: our argument vector
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
