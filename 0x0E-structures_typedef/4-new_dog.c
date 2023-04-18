#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - Finds the length of a string.
 * @str: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strcopy - Copies a string pointed to by src, including the
 *            terminating null byte, to a buffer pointed to by dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 *
 * Return: The pointer to dest.
 */
char *_strcopy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - Creates a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: The new struct dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *gbee;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	gbee = malloc(sizeof(dog_t));
	if (gbee == NULL)
		return (NULL);

	gbee->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (gbee->name == NULL)
	{
		free(gbee);
		return (NULL);
	}

	gbee->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (gbee->owner == NULL)
	{
		free(gbee->name);
		free(gbee);
		return (NULL);
	}

	gbee->name = _strcopy(gbee->name, name);
	gbee->age = age;
	gbee->owner = _strcopy(gbee->owner, owner);

	return (gbee);
}
