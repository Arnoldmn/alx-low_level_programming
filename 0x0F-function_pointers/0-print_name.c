#include "function_pointers.h"

/**
 * print_name - print name from function of pointers
 * @name: char string
 * @f: function pointer that takes string
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);

}

