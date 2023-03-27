#include "main.h"

/**
* swap_int - Swaps the vaalues of two values
* @a: The first value to swap
* @b: The second value to swap
*
* Return: nothing
*/

void void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
