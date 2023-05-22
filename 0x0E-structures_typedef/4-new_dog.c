#include <stdlib.h>
#include "dog.h"

/**
* _strlen - returns the length of a string
* @s: string to be returned
* Return: the length of the string
*/

int _strlen(char *s)
{
	int m;

	m = 0;
	while (s[m] != '\0')
	{
		m++;
	}
	return (m);
}

/**
* _strcpy - copies string pointed to by src
* @dest: string in question
* @src: string to be copied
* Return: pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int k, j;

	k = 0;
	while (src[k] != '\0')
	{
		k++;
	}

	for (j = 0; j < k; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';

	return (dest);
}

/**
* new_dog - creates a dog
* @name: name of the dog
* @age: age of the dog
* @owner: dog owner
* Return: pointer to the new dog and NULL if otherwise
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int mul, mul1;

	mul = _strlen(name);
	mul1 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (mul + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (mul1 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
