#include "dog.h"

/**
 * free_dog - libera memoria
 * @d: structura que se liberara
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		free(d);
	}
}
