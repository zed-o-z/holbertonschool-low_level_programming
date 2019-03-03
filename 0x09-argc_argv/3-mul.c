#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0 if it works, 1 if there is an ERROR
 */

int main(int argc, char *argv[])
{
	int n = 0;
	int m = 0;
	int diff = 0;

	if (argc != 3)
	{
		printf("ERROR\n");
		return (1);
	}

	else
	{
		n = atoi(argv[1]);
		m = atoi(argv[2]);
		diff = n * m;

		printf("%i\n", diff);
	}

	return (0);
}