#ifndef DOG_H
#define DOG_H
/**
* struct dog - a structure to hold basic information about a dog
* @name: the name of the dog
* @age: the age of the dog
* @owner: the owner of the dog
*
* Description: This structure contains the basic information about a dog.
*/
struct dog
{
char *name;
float age;
char *owner;
};
/**
* dog_t - a typedef for the struct dog structure
*/
typedef struct dog dog_t;
char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _strlen(char *s);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
