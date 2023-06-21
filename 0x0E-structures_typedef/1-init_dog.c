#include "dog.h"
#include <stdlib.h>
/**
* init_dog - Declares a variable named "dog" with the data type struct.
* @d: The canine to be initialized.
* @name: The name of the dog.
* @age: The age of the dog.
* @owner: The person who possesses the canine.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
