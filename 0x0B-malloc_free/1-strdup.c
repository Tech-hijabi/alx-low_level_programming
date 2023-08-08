#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function returns a pointer to a new string which is a duplicate
 * of the string (str)
 * @str: the string that is duplicated
 *
 * Return: NULL (If failure)
 */
char *_strdup(char *str)
{
	char *new_s;
	int i, s;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	new_s = malloc((sizeof(char) * i) + 1);

	if (new_s == NULL)
	{
		return (NULL);
	}
	else
	{
		s = 0;

		while (str[s])
		{
			new_s[s] = str[s];
			s++;
		}
		return (new_s);
	}
}
