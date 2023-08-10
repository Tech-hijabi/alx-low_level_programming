#include <stdlib.h>
#include "main.h"

/**
 * argstostr - function concatenates all the arguments of my program
 * @ac: the argument count
 * @av: a pointer to the argument vector
 *
 * Return: NULL (If failure)
 */
char *argstostr(int ac, char **av)
{
	int wd = 0, i, j, n_str;
	char *s;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (i < ac)
	{
		j = 0;

		while (av[i][j])
		{
			wd++;
			j++;
		}
		i++;
	}

	s = malloc((sizeof(char) * (wd + ac)) + 1);

	for (i = 0; av[i]; i++)
	{
		while (av[i][j])
		{
			s[n_str] = av[i][j];
			n_str++;
			j++;
		}
		s[n_str] = '\n';

		j = 0;
		n_str++;
	}

	n_str++;
	s[n_str] = '\0';
	return (s);
}
