#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _islower - checks if a character is lowercase
 * @c: the character
 * Return: 1 if letter is lowercase, 0 if not
 */

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

