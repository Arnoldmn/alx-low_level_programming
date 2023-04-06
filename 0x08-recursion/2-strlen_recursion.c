#include "main.h"
/**
 * _strlen_recursion - returns lenght of a string<<F5>
 * @s: string character
 * Return: string length
 */
void _strlen_recursion(char *s)
{
	int j = 0;

	if (*s)
	{
		j++;
		j += _strlen_recursion(s + 1);
	}

	return (j);
}
