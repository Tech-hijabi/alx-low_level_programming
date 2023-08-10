#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - function concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: the allocated space in memory
 *
 * Return: a pointer to the newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2;
	char *conc_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		n = len2;

	conc_str = malloc(len1 + n + 1);

	if (conc_str == NULL)
		return (NULL);

	memcpy(conc_str, s1, len1);

	memcpy(conc_str + len1, s2, n);

	conc_str[len1 + n] = '\0';
	return (conc_str);
}
