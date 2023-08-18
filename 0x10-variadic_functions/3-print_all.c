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
	char *strn, *sprt = "";
	va_list all;

	va_start(all, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sprt, va_arg(all, int));
					break;
				case 'i':
					printf("%s%d", sprt, va_arg(all, int));
					break;
				case 'f':
					printf("%s%f", sprt, va_arg(all, double));
					break;
				case 's':
					strn = va_arg(all, char *);
					if (!strn)
						strn = "(nil)";
					printf("%s%s", sprt, strn);
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
