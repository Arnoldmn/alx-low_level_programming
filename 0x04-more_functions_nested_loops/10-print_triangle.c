#include "main.h"
/**
 * print_triangle - entry point
 * Description: Prints diagonals
 * @size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int n, o, p;

	if (size > 0)
	{
		for (n = 1; n <= size; n++)
		{
			for (p = size - n; p > 1; p--)
				_putchar(' ');
			for (o = 0; o <= n; o++)
				_putchar('#');

			if (n == size)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
