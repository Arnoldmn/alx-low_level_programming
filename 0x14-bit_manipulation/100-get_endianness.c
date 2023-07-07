#include "main.h"
/**
 * get_endianness - function that checks
 * Return: 0 on big endian, else 1
 */
int get_endianness(void)
{
	int i;
	char *b;

	i = 1;
	b = (char *)&i;
	return (*b);
}
