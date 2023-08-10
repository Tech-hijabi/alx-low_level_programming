#include <stdlib.h>
#include "main.h"

int count_words(char *str);

/**
 * strtow - function splits a string into words
 * @str: the string that is splitted
 *
 * Return: NULL (if failure)
 */
char **strtow(char *str)
{
	int i;
	char **words, *start;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = malloc(sizeof(char *) * (count_words(str) + 1));

	if (words == NULL)
		return (NULL);

	for (i = 0; i < count_words(str) + 1; i++)
	{
		words[i] = NULL;
	}
	i = 0;
	start = str;

	while (i < count_words(str))
	{
		while (*start == ' ')
			start++;
		if (*start == '\0')
			break;
		words[i] = start;
		while (*start != ' ' && *start != '\0')
			start++;
		*start = '\0';
		i++;
	}
	return (words);
}


/**
 * count_words - function counts numbers words the string is splitted into
 * @str: the string
 *
 * Return: the count
 */
int count_words(char *str)
{
	int i, count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			count++;
	}
	count++;
	return (count);
}
