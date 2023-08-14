#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
* new_dog - function that creates a new dog
*
* @name: dog's name
*
* @age: dog's age
*
* @owner: dog's owner
*
* Return: new_dog
*
* File_name: 4-new_dog.c
*
* Author: Esther Ann Uduma
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}

	new_dog->name = strdup(name);
	new_dog->age = age;
	new_dog->owner = strdup(owner);

	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);

		return (NULL);
	}

	return (new_dog);
}
