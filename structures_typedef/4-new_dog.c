#include "dog.h"

/**
 * contador - cuanta los elementos de una array
 * @dato: array
 */
int contador(char *dato)
{
	int i;

	for (i = 0; dato[i] != '\0'; i++)
	{}
	return (i);
}

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
	int c;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}

	copy_name = malloc(contador(name) + 1);

	if (copy_name == NULL)
	{
		return (NULL);
	}
	for (c = 0; name[c] != '\0'; c++)
	{
		copy_name[c] = name[c];
	}
	copy_name[c] = '\0';

	new_dog->name = copy_name;
	new_dog->age = age;

	copy_owner = malloc(contador(owner) + 1);

	if (copy_owner == NULL)
	{
		return (NULL);
	}
	for (c = 0; owner[c] != '\0'; c++)
	{
		copy_owner[c] = owner[c];
	}
	copy_owner[c] = '\0';

	new_dog->owner = copy_owner;
	return (new_dog);
}
