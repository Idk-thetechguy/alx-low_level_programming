#include "dog.h"

/**
 * free_dog - Frees memory allocated for a dog_t structure
 * @d: Pointer to a dog_t structure to be freed
 *
 * Description: This function takes a pointer to a dog_t structure and frees
 * the memory allocated for the structure, including the memory allocated for
 * the name and owner fields of the structure.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
		{
			free(d->name);
		}

		if (d->owner != NULL)
		{
			free(d->owner);
		}

		free(d);
	}
}
