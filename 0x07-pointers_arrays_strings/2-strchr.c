#include "main.h"
/**
 *_strchr - find a character in string
 *@c: character occurence
 *@s: pointer in string
 *Return: return pointer of the first character
 */
void  *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		s++;
	}
	if (*S == c)
	{
		return (s);
	}
	return (0);
}
