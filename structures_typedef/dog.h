
#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Struct that saves the name age and owner of dog
 * @name: name of the owner
 * @age: Age of owner
 * @owner: Owner
 * Description: Struct
 */

struct dog
{
	char *name;
	float age;
	char *owner;
}
;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
 * struct dog_t - Struct that saves the name age and owner of dog
 * @name: name of the owner
 * @age: Age of owner
 * @owner: Owner
 * Description: Struct
 */
typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
} dog_t;
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
