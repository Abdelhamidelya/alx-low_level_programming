#include "dog.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
*new_dog - function that creates a new dog
*
*@name: dog name
*
*@age: dog age
*
*@owner: dog owner
*
*Return: new dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	int len_name, len_owner;
	struct dog *new_dog;

	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
		return (NULL);
	len_name = strlen(name);
	new_dog->name = malloc(sizeof(char) * (len_name + 1));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = strcpy(new_dog->name, name);
	new_dog->age = age;
	len_owner = strlen(owner);
	new_dog->owner = malloc(sizeof(char) * (len_owner + 1));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = strcpy(new_dog->owner, owner);
	return (new_dog);
}
