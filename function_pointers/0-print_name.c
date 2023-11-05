#include "function_pointers.h"

/**
 * print_name - punto de entrada
 * @name: puntero a dato
 * @f: puntero a funcion
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
