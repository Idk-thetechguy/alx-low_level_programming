#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * init_dog - Initializes a struct dog variable
 * @d: Pointer to the struct dog variable to be initialized
 * @name: Pointer to the name of the dog
 * @age: Age of the dog
 * @owner: Pointer to the owner of the dog
 *
 * Return: None
 *
 * Description: This function initializes a struct dog variable
 * for name, age, and owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
#endif
