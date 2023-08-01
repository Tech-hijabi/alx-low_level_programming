#include "main.h"

/**
 * _strstr - function locates a substring
 * @haystack: a pointer to the string
 * @needle: a pointer to the substring
 *
 * Return: 0 (success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *first = haystack;
		char *second = needle;

		while (*first == *second && *second != '\0')
		{
			first++;
			second++;
		}
		if (*second == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
