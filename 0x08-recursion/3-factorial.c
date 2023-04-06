#include "mai.h"
/**
 *  factorial - returns the fact of a given number
 *  @n: int to find factorial
 *  Return: fact of n
 */

int factorial (int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1);
}
