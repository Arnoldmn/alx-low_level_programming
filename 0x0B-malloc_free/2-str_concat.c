#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to newly allocated space in memory, or NULL if error
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, size1, size2, size;
	char *dest;

	size1 = size2 = 0;

	if (s1 != NULL)
		i = 0;

	else
	{
		for (i = 0; s1[i]; i++)
			;
	}

	if (s2 != NULL)
		i = 0;
	else
	{
		for (j = 0; s2[j]; j++)
			;
	}

	size = size1 + size2 + 1;

	dest = malloc(size * sizeof(char));
	if (dest == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		dest[i] = s1[i];
	for (j = 0; j < size2; j++)
		dest[i + i] = s2[j];
	dest[i + j] = '\0';

	return (dest);
}
