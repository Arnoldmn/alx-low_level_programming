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
	char *s;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		;
	i++;
	s = malloc(i * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		s[j] = str[j];
	}
	return (s);
}
