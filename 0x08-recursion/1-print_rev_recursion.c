#include "main.h"
/**
 * _print_rev_recursion - string to printed in reverse
 * @s: string pointer
 * _putchar - prints out the character
 *  Return: 0;
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
