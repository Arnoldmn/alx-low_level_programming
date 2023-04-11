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
	unsigned int i, j, m, n;
	char *dest;


	if (s1 == NULL)
		i = 0;

	else
	{
		for (i = 0; s1[i]; i++)
			;
	}

	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j]; j++)
			;
	}

	m = i + j + 1;

	dest = malloc(m * sizeof(char));
	if (dest == NULL)
		return (NULL);

	for (n = 0; n < i; n++)
		dest[i] = s1[i];
	for (n = 0; n < j; n++)
		dest[i + i] = s2[j];
	dest[i + j] = '\0';

	return (dest);
}
