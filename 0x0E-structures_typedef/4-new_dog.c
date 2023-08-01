#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - function that creates a new dog
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the new dog
 *
 * Return: pointer to the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int t, s, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}

	for (t = 0; name[t] != '\0'; t++)
		;
	t++;
	dog->name = malloc(sizeof(char) * t);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < t; i++)
		dog->name[i] = name[i];

	dog->age = age;

	for (s = 0; owner[s] != '\0'; s++)
		;
	s++;
	dog->owner = malloc(sizeof(char) * s);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < s; i++)
		dog->owner[i] = owner[i];

	return (dog);
}
