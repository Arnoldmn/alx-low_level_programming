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

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (n = 0; n <= size; n++)
		{
			for (p = size - n; p > 1; p--)
			{
			_putchar(' ');
			}
			for (o = 1; o <= n; o++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
