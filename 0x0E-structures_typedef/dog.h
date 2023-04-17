#ifndef DOG
#define DOG

/**
 * struct dog - struct
 * @name: first char pointer
 * @age: float number
 * @owner: second char pointer
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 *  dog_t - struct typeof dog
 */
typedef struct dog dog_t;

int _putchar(char);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


#endif

