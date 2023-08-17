#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_strings - function prints string with a separator
 * @separator: pointer to the string to be printed between the actual strings
 * @n: the number of strings passed to the function
 *
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char *s;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(str, char *);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(str);
	printf("\n");
}
