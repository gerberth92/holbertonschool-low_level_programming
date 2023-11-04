#include "dog.h"

/**
 * new_dog - crea una nueva estructura
 * @name: nombre del perro
 * @age: edad del perro
 * @owner: dueño del perro
 * Return: new_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *copy_name, *copy_owner;
	int i, j;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
	{}
	copy_name = malloc(sizeof(char) * i + 1);

	if (copy_name == NULL)
	{
		return (NULL);
	}
	new_dog->name = name;

	for (j = 0; name[j] != '\0'; j++)
	{
		copy_name[j] = name[j];
	}
	copy_name[j] = '\0';
	new_dog->age = age;

	for (i = 0; owner[i] != '\0'; i++)
	{}
	copy_owner = malloc(sizeof(char) * i + 1);

	if (copy_owner == NULL)
	{
		return (NULL);
	}
	for (j = 0; owner[j] != '\0'; j++)
	{
		copy_owner[j] = owner[j];
	}
	copy_owner[j] = '\0';
	return (new_dog);
}
