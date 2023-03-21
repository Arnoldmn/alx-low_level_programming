#include "main.h"

/**
 * _isalpha - a function that checks for alphabet character
 * @c: single letter
 * Return: 1 if c a letter (lowercase or uppercare), 0 otherwise
 */

int _isalpha(int c)
{
	if (((c >= 'a' && c <= 'z)) || ((c >= 'A' && c <= 'Z')))

		return (1);
	else
		return (0);
}
