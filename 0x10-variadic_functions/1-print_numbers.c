#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_numbers - function prints numbers
 * @separator: pointer to the string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;

	if (separator == NULL)
		return;
	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		printf("%d%s", va_arg(num, int), i < n - 1 ? separator : "");
	}
	va_end(num);
	printf("\n");
}
