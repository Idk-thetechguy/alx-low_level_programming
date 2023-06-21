#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
* print_dog - Creates a representation of the dog object.
* @d: Print the dog structure.
*/
void print_dog(struct dog *d)
{
if (d == NULL)
return;
if (d->name == NULL)
printf("Name: (nil)\n");
else
printf("Name: %s\n", d->name);
if (d->age < 0)
printf("Age: (nil)\n");
else
printf("Age: %f\n", d->age);
if (d->owner == NULL)
printf("Owner: (nil)\n");
else
printf("Owner: %s\n", d->owner);
}
#include "dog.h"
#include <stdlib.h>
int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);
/**
* _strlen - Finds the length of a string.
* @str: The string to be measured.
*
* Return: The length of the string.
*/
int _strlen(char *str)
{
int len = 0;
while (*str++)
len++;
return (len);
}
/**
* _strcopy - Duplicates a character sequence referenced by src, encompassing
*            terminating null byte, to a buffer pointed to by dest.
* @dest: The buffer storing the string copy.
* @src: The source string.
*
* Return: The pointer to dest.
*/
char *_strcopy(char *dest, char *src)
{
int index = 0;
for (index = 0; src[index]; index++)
dest[index] = src[index];
dest[index] = '\0';
return (dest);
}
/**
* new_dog - Creates a new dog.
* @name: The name of the dog.
* @age: The age of the dog.
* @owner: The owner of the dog.
*
* Return: The new struct dog.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *doggo;
if (name == NULL || age < 0 || owner == NULL)
return (NULL);
doggo = malloc(sizeof(dog_t));
if (doggo == NULL)
return (NULL);
doggo->name = malloc(sizeof(char) * (_strlen(name) + 1));
if (doggo->name == NULL)
{
free(doggo);
return (NULL);
}
doggo->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if (doggo->owner == NULL)
{
free(doggo->name);
free(doggo);
return (NULL);
}
doggo->name = _strcopy(doggo->name, name);
doggo->age = age;
doggo->owner = _strcopy(doggo->owner, owner);
return (doggo);
}
