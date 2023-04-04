#include "main.h"
/**
 * _strchr - find a character in string
 * @c: character occurence
 * @s: pointer in string
 * Return: Always 0
 */
void  *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)

	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}

	return (0);
}
