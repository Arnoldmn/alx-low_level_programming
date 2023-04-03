#include "main.h"
/**
 * _memset - function to fill the first @n bytes of the mem
 * @s: constant pointer
 * @n: bytes of the memory area pointed to by @s
 *
 * @b: memory pointer
 *
 * Return: a pointer to the memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}


