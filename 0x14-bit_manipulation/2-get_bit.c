#include"main.h"
/**
 * get_bit - gives bit value of given index.
 * @n: checks bits
 * @index: given location
 *
 * Return: bit's value,-1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divider, res;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	divider = 1 << index;
	res = n & divider;
	if (res == divider)
		return (1);
	return (0);
}
