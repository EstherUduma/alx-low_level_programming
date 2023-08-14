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
	int len_owner, len_owner;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	len_name = _strlen(name);
	new_dog->name = malloc(sizeof(char) * len_name + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = _strcpy(new_dog->, name);
	len_owner = _strlen(owner);
	new_dog->owner = malloc(sizeof(char) * len_owner + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = _strcpy(new_dog->owner, owner);
	new_dog->age = age;

	return (new_dog);
}

/**
* _strlen - lenght of string
*
* @s: pointer
*
* Return: length
*/

int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
		;
	return (a);
}

/**
* _strcpy - copies a pointed string
* @dest: destination string
* @src: source string
* Return: the address of the destination string
*/

char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}

	dest[a] = '\0';
	return (dest);
}
