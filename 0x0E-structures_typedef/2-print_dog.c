#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function prints the type struct dog
 * @d: pointer to the types
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)");
	if (d->owner == NULL)
		printf("Owner: (nil)");
	else
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
