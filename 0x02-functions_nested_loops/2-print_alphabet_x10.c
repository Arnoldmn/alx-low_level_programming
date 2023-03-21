#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabet 10 times, lowercase
 */

void print_alphabet_x10(void)
{
	int count = 0;
	char alpha;

	for (count = 0; count <= 9; count++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}

		_putchar('\n');
	}
}
