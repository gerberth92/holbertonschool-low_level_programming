#include "dog.h"

/**
 * print_dog - imprime una estructura
 * @d: estructura a imprimir
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	(d->name == NULL) ? printf("Name: (nil)\n") : printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	(d->owner == NULL) ? printf("owner: (nil)\n") :
	printf("Owner: %s\n", d->owner);
}
