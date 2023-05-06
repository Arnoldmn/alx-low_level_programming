#include "main.h"

/**
 * clear_bit - places bit's value to 0 at an index.
 * @n: a's int
 * @index: bit position
 * Return: 1, -1 encounters error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	a = ~(1 << index);
	*n = *n & a;

	return (1);
}
