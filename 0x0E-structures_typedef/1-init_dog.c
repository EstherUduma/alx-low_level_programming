#include "dog.h"

/**
* init_dog - function that initialize a variable of type struct dog
*
* @d: pointer
*
* @name: dog's name
*
* @age: dog's age
*
* @owner: dog's owner
*
* Return: void
*
* File_name: 1-init_dog.c
*
* Author: Esther Ann Uduma
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
