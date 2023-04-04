#include "main.h"
/**
 * _strpbrk - Entry point
 *
 * @s: pointer string
 *
 * @accept: accepts occurrence string
 *
 * Return: Always 0 (success)
 */
void *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
				return (s);
		}
		s++;
	}
	return ('\0');
}
