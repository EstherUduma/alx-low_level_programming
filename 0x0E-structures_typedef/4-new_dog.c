#include "dog.h"
#include <stdlib.h>
#include <string.h>

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
	dog_t *helper;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	helper = malloc(sizeof(dog_t));
	if (helper == NULL)
		return (NULL);

	helper->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (helper->name == NULL)
	{
		free(helper);
		return (NULL);
	}

	helper->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (helper->owner == NULL)
	{
		free(helper->name);
		free(helper);
		return (NULL);
	}

	helper->name = _strcpy(helper->name, name);
	helper->age = age;
	helper->owner = _strcpy(helper->owner, owner);

	return (helper);
}
