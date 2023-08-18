#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_all - function prints anything
 * @format: pointer to the list of types of arguments passed to the function
 *
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	float f;
	char c, *s, *sprt = "";
	va_list all;

	va_start(all, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					c = va_arg(all, int);
					printf("%s%c", sprt, c);
					break;
				case 'i':
					i = va_arg(all, int);
					printf("%s%d", sprt, i);
					break;
				case 'f':
					f = va_arg(all, double);
					printf("%s%f", sprt, f);
					break;
				case 's':
					s = va_arg(all, char *);
					if (s == NULL)
						printf("(nil)");
					printf("%s%s", sprt, s);
					break;
				default:
					i++;
					continue;
			}
			sprt = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(all);
}
