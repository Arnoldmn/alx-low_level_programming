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
	printf("Size of int: %zu bytes\n", sizeof(int));
	printf("Size of float: %zu bytes\n", sizeof(float));
	printf("Size of double: %zu bytes\n", sizeof(double));
	printf("Size of char: %zu byte\n", sizeof(char));
	return (0);
}
