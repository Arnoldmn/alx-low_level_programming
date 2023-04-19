#include "function_pointers.h"

/**
 * int_index - searches for a integer
 * @array: pointer array
 *
 * @size: size of the integer
 * @cmp: function pointer of type int
 * Return: -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);
				i++;
			}
		}
	}

	return (-1);
}

		
