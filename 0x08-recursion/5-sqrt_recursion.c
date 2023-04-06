#include "main.h"
/**
 * _sqrt_recursion - return natural square root of an int
 * @n: int to be calculated square root
 *
 * Return: the result of square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (check_sqrt(n, 0));
}

/**
 * check_sqrt - verifies the natural square root of a int
 * @i: integer
 * @j: integer
 * Return: natural square root of -1
 */

int check_sqrt(int i, int j)
{
	if (i * i > j)
		return (-1);
	if (i * i == j)
		return (i);
	return (check_sqrt(j, i + 1));
}
