#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - Function that returns the length of a string
 * @s: String
 * Return: length
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
	{
	}
	return (len);
}

/**
 * _strcpy - Function that copies a string
 * @dest: Destination
 * @src: Source
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - function that creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *aux;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	aux = malloc(sizeof(dog_t));
	if (aux == NULL)
	{
		return (NULL);
	}

	aux->name = malloc((_strlen(name) + 1) * sizeof(char));
	if (aux->name == NULL)
	{
		free(aux);
		return (NULL);
	}
	_strcpy(aux->name, name);

	aux->owner = malloc((_strlen(owner) + 1) * sizeof(char));
	if (aux->owner == NULL)
	{
		free(aux->name);
		free(aux);
		return (NULL);
	}
	_strcpy(aux->owner, owner);

	aux->age = age;

	return (aux);
}
