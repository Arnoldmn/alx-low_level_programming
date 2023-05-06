#include "main.h"
/**
 * flip_bits - sums bits to flip
 * @n: first figure
 * @m: second int
 * Return: changing bit
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, sum = 0;
	unsigned long int temp;
	unsigned long int diff = n ^ m;

	for (sum = 63; sum >= 0; sum--)
	{
		temp = diff >> i;
		if (temp & 1)
			sum++;
	}

	return (sum);
}

