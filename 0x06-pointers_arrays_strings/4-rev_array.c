#include "main.h"

/**
 * reverse_array - function reverses the content of an array of integers
 * @a: array of integers
 * @n: the number of elements being reversed or replaced
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0, tmp;

	n = n - 1;

	for (i = 0; i < n; i++)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
		n--;
	}
}
