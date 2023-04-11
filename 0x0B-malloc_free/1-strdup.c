#include "main.h"
#include <stdlib.h>
/**
 * _strdup - copy a string to a new memory allocation
 *
 * @str: string to be copied
 *
 * Return: duplicated string or null if NULL
 */
char *_strdup(char *str)
{
	unsigned int i, j;
	char *c;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		;
	i++;
	c = malloc(i * sizeof(char));
	if (c == Null)
	{
		return (NUll);
	}
	for (j = 0; j < 1; j++)
	{
		c[j] = str[j];
	}

	return (c);
}

