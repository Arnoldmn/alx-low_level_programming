#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
	char alpha;

	while (alpha < 'z')
	{
		_putchar("%c ", alpha);
		alpha++;
	}

	return (0);
}
