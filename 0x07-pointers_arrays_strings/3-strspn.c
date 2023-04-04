#include "main.h"
/**
 * _strspn - gets lenght of a prefix substring
 *
 * @s: where to for substring
 * @accept: substring of characters accpted
 * Return: of occurence lenght
 */
unsigned int _strpn(char *s, char *accept)
{
	unsigned int a = 0;
	int b;

	while (*s)
	{
		for (b = 0; accept[b]; b++)
		{
			if (*s == accept[r])
			{
				a++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (a);
		}
		s++;
	}
	return (a);
}
