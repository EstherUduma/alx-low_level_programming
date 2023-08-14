#include "dog.h"
#include <stdlib.h>

/**
* free_dog - this function that frees dogs
*
* @d: dog
*
* Return: void
*
* File_name: 5-free_dog.c
*
* Author: Esther Ann Uduma
*/

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
