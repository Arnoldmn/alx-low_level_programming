#include "variadic_functions.h"

/**
 * sum_them_all - adds all the natural numbers
 * @n: number to be passed
 * Return: Always 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list ij;

	va_start(ij, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(ij, int);
	va_end(ij);

	return (sum);

}
