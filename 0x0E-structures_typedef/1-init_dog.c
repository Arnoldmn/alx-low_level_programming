#include "dog.h"
/**
 * init_dog - initializes a variable of type struct dog
 * @d: dog to be init
 * @name: pointer the dog name
 * @age: dog age which is a float
 * @owner:pointer who owns the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name =  name;
		d->age = age;
		d->owner = owner;
	}
}

