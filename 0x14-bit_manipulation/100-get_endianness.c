#include "main.h"

/**
 * get_endianness - gets endianness
 * Return: 0 big, 1 if small
 */
int get_endianness(void)
{
	int a;
	char *b;

	a = 1;
	b = (char *)&a;
	return (*b);
}
