#ifndef DOG_H
#define DOG_H
/**
 *struct dog - Short description
 *@name: First member
 *@age: Second member
 *@owner: Third member
 *Description: Larger description
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
