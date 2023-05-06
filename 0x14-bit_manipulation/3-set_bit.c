#include "main.h"
/**
 * set_bit - positions bit's value to 1
 * @n: the interger
 * @index:position to
 * Return: 1, -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int position;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	position = 1 << index;
	*n = *n | position;
	return (1);
}
