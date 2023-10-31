#include "dog.h"

/**
 *init_dog - inicializa una estructura
 *@d: apunta a struct dog
 *@name: nombre del perro
 *@age: edad del perro
 *@owner: dueño del perro
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
