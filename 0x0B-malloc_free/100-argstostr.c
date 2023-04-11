#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of grid
 *
 * @ac: argument
 * @av: double pointer
 *
 * Return: pointer to be concat
 */

char *argstostr(int ac, char **av)
{
	int q, r, s, t;

	s = 0;
	t = 0;

	char *p;

	if (ac <= 0 || av == NULL)
		return (NULL);
	for (q = 0; q < ac; q++)
	{
		for (r = 0; av[q][r]; j++)
			t++;
		t++;
	}
	t++;
	p = malloc(sizeof(char) * t);
	if (p == NULL)
		return (NULL);
	for (q = 0; q < ac; q++)
	{
		for (r = 0; av[q][r]; r++)
		{
			p[s] = av[q][r];
			s++;
		}
		p[s] = '\n';
		s++;
	}
	p[s] = '\0';
	return (s);
}
