#include "function_pointers.h"
/**
 * @array_iterator - a function as a param on each
 * element of array
 *
 * @array; array to test function on
 * @size: array size
 * @action: is a pointer to the function
 *
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
