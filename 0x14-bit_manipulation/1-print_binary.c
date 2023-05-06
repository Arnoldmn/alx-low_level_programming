#include "main.h"
/**
 * _exponent - worksout (base & power)
 * @base: base to power
 * @expo: power to the exponent
 * Return: value of exponent
 */
unsigned long int _exponent(unsigned int base, unsigned int expo)
{
	unsigned long int pwr;
	unsigned int i;

	pwr = 1;
	for (i = 1; i <= expo; i++)
		pwr *= base;
	return (pwr);
}
/**
 * print_binary - prints binary int representation
 * @n: number to print
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int divider, res;
	char flag;

	flag = 0;
	divider = _exponent(2, sizeof(unsigned long int) * 8 - 1);

	while (divider != 0)
	{
		res = n & divider;
		if (res == divider)
		{
			flag = 1;
			_putchar('1');

		}
		else if (flag == 1 || divider == 1)
		{
			_putchar('0');
		}
		divider >>= 1;
	}
}
