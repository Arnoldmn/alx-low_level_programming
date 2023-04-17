#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates new dog
 *
 * @name: name of the dog
 *
 * @age: age of the dog
 * @owner: dog owner
 *
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int i, j, x;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (i = 0; name[i]; i++)
		;
	i++;

	dog->name = malloc(i * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (x = 0; x < i; i++)
		dog->name[x] = name[x];
	dog->age = age;
	for (j = 0; owner[j]; j++)
		;
	j++;
	dog->owner = malloc(j * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (x = 0; x < j; x++)
		dog->owner[x] = owner[x];
	return (dog);
}
