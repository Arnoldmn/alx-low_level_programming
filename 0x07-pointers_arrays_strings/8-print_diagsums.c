#include "main.h"
/**
 * print_diagsums - prints sum of 2D matrix
 *
 * @a: pointer starting matrix
 * @size: matrix size
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0, z;

	for (z = 0; z < size; z++)
	{
		sum1 = sum1 + a[z * size + z];
	}

	for (z = size - 1; z >= 0; z--)
	{
		sum2 += a[z * size + (size - z - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
