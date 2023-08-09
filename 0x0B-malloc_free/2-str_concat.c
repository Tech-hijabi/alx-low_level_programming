#include <stdlib.h>
#include "main.h"

/**
 * str_concat - function concatenates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: NULL (if failure)
 */
char *str_concat(char *s1, char *s2)
{
	char *con;
	int i, j;

	if (s1 == NULL && s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	i = 0, j = 0;

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	con = malloc((sizeof(char) * (i + j)) + 1);

	if (con == NULL)
	{
		return (NULL);
	}
	i = j = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		con[i] = s1[i];
	}

	while (s2[j] != '\0')
	{
		con[i] = s2[j];
		i++;
		j++;
	}
	con[i] = '\0';
	return (con);
}
