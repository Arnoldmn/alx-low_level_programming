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
int main(int argc, char *argv[])
{
	int i, j;

	char *flag;

	int sum = 0;

	if (argc < 3)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; argv[i]; i++)
	{
		j = strtol(argv[i], &flag, 10);

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

	printf("%d\n", sum);

	return (0);
}


