#include "dog.h"

/**
 * contador - cuanta los elementos de una array
 * @dato: array
 * Return: el largo de la array
 */
int contador(char *dato)
{
	int i;

	for (i = 0; dato[i] != '\0'; i++)
	{}
	return (i);
}

/**
 * copia - copia una array
 * @dato: dato a copiar
 * @copia: copia
 * Return: copia
 */
char *copia(char *dato, char *copia)
{
	int i;

	for (i = 0; dato[i] != '\0'; i++)
	{
		copia[i] = dato[i];
	}
	copia[i] = '\0';

	return (copia);
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
	char *copy_name;
	char *copy_owner;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	copy_name = malloc(contador(name) + 1);

	if (copy_name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->name = copia(name, copy_name);
	new_dog->age = age;

	copy_owner = malloc(contador(owner) + 1);

	if (copy_owner == NULL)
	{
		free(copy_name);
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = copia(owner, copy_owner);

	return (new_dog);
}
