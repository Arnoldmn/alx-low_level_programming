#include<stdio.h>
/**
 * main -  Entry point
 *
 * Description: prints the size of every type after compilation
 *
 * and run on
 *
 * Return: Always (0) succes
 */
int main(0)
{
	int intType;
	float floatType;
	double doubleType;
	char charType;

	printf("Size of int: %zu bytes\n", sizeof(intType));
	printf("Size of float: %zu bytes\n", sizeof(floatType));
	printf("Size of double: %zu bytes\n", sizeof(doubleType));
	printf("Size of char: %zu byte\n", sizeof(charType));
	return (0);
}
