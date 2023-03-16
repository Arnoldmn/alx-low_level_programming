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
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Size of a char: %d byte(s)\n", sizeof(d));
	printf("Size of a int: %d byte(s)\n", sizeof(a));
	printf("Size of a long int: %d byte(s)\n", sizeof(b));
	printf("Size of a long long int: %d byte(s)\n", sizeof(c));
	printf("Size of a float: %d byte(s)\n", sizeof(f));
	return (0);
}
