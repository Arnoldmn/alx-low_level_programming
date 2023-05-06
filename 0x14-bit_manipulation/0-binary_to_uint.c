#include "main.h"
/**
 * binary_to_uint - changes binary to unsigned int.
 * @b: points to string
 * Return: unsigned int, unsuccessful 0
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int fig;

	fig = 0;
	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		fig <<= 1;
		if (b[i] == '1')
			fig += 1;
	}
	return (fig);
}
