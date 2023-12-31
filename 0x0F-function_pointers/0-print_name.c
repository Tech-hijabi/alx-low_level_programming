#include "function_pointers.h"

/**
 * print_name - function prints a name
 * @name: the name to be printed
 * @f: pointer to the function
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	f(name);
}
