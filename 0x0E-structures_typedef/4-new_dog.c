#include <stdlib.h>
#include "dog.h"


/**
 * _strlen - returns string length
 * @s: string to evaluate
 * Return: string length
 */

int _strlen(char *s)
{
	int r;

	r = 0;
	while (s[r] != '\0')
	{
		r++;
	}
	return (r);
}
/**
 * *_strcpy - copies string src points to null byte included
 * copies it to buffer dest points to
 * @dest: pointer to buffer
 * @src: string to be copied
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int x;
	int n;

	x = 0;
	while (src[x] != '\0')
	{
		x++;
	}
	for (n = 0; n < x; n++)
	{
		dest[n] = src[n];
	}
	dest[n] = '\0';
	return (dest);
}
/**
 * new_dog - make new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: pointer to the new dog if Successful, NULL not
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int a;
	int b;

	a = _strlen(name);
	b = _strlen(owner);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (a + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (b + 1));
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
