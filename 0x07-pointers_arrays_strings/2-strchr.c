#include "main.h"

/**
 *_strchr - find a character in string
 *@c: character occurence
 *@s: pointer in string
 *Return: return pointer of the first character
 */

void  *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
