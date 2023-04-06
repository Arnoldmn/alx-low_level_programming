#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to pow y
 * @x: integer to raise
 * @y: power of x
 */

int _pow_rursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
