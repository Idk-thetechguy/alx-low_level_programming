#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * struct dog - Structure for representing information about a dog.
 * @name: Pointer to a character string representing the dog's name.
 * @age: Float value representing the dog's age.
 * @owner: Pointer to a character string representing the dog's owner.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}
dog_t;

#endif
