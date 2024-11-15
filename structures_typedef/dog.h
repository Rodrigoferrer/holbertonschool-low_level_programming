
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
#endif
