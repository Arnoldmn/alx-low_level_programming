#include "main.h"
/**
* _strlen - Returns the length os a string
* @str: the string to get the length
* Return: the length o @str
*/
int _strlen(char *str)
{
	int length = 0;

	while (*str++)
		length++;
	return (length);
}
