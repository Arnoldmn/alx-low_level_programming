#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to newly allocated space in memory, or NULL if error
 */

char *str_concat(char *s1, char *s2)
{
	size_t siz1 = strlen(s1);
	size_t siz2 = strlen(s2);

	char* result = (char*) malloc(siz1 + siz2 + 1);

	if (result) {
		memcpy( result, s1, siz1);
		memcpy( result + siz1, s2, siz2 + 1);
	}

	return result;
}
