#include "main.h"

/**
 * swap_int - funtion swaps the values of two integers
 * @a: first initialized var
 * @b: second initialized var
 *
 * Return: 0 (success)
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
