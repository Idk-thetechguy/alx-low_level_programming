#ifndef MAIN_H
#define MAIN_H
/**
* struct dog - A novel classification for a dog
* @name: The dog's designation
* @age: The age of the dog.
* @owner: The individual possessing the dog
*/
struct dog
{
char *name;
float age;
char *owner;
};
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
#endif
