#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds two positive numbers
 * @argc: argument count
 *
 * @argv: argument vector
 *
 * Return: Always (0) or (1)
 */
void main(int argc, char *argv[])
{
	int i, j;

	int sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; argc[i]; i++)
	{
		j = strtoi(argv[i], &flag, 10);

		if (*flag)
		{
			printf("Error\n");
			return (1);
		}

		else
		{
			sum += j;
		}
	}

	printf("*d\n", sum);

	return (0);
}


