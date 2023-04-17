#include "dog.h"
#include <stdlib.h>
/**
 * _lenstrn - Finds the length of a string.
 * @str: The string to be measured.
 *
 * Return: The length of the string.
 */
int _lenstrn(char *str)
{
int i = 0;
while (*str++)
{
i++;
}
return (i);
}
/**
 * _strdup - Copies a string pointed to by src.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 *
 * Return: The pointer to dest.
 */
char *_strdup(char *dest, char *src)
{
int i = 0;
for (i = 0; src[i]; i++)
{
dest[i] = src[i];
}
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
dog_t *bosto;
if (name == NULL || age < 0 || owner == NULL)
{
return (NULL);
}
bosto = malloc(sizeof(dog_t));
if (bosto == NULL)
{
return (NULL);
}
bosto->name = malloc(sizeof(char) * (_lenstrn(name) + 1));
if (bosto->name == NULL)
{
free(bosto);
return (NULL);
}
bosto->owner = malloc(sizeof(char) * (_lenstrn(owner) + 1));
if (bosto->owner == NULL)
{
free(bosto->name);
free(bosto);
return (NULL);
}
bosto->name = _strdup(bosto->name, name);
bosto->age = age;
bosto->owner = _strdup(bosto->owner, owner);
return (bosto);
}
