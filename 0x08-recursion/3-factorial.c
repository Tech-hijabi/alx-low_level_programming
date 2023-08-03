#include "main.h"

/**
 * factorial - function prints the factorial of n recursively
 * @n: the number
 *
 * Return: calculated output
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
