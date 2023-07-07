#include "main.h"
/**
 * get_endianness - chacks the endianness
 * Return: 0 on big endian, 1 on small endian
 */
int get_endianness(void)
{
	int i;
	char *c;

	i = 1;
	b = (char *)&i;
	return (*b);
}
