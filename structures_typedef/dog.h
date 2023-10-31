#ifndef _dog_h_
#define _dog_h_

#include <stdio.h>
#include <stddef.h>

/**
 * struct dog - datos de perros
 * @name: nombre del perro
 * @age: edad del perro
 * @owner :dueño del perro
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
