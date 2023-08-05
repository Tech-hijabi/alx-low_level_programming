#include <stdio.h>
#include "main.h"

/**
 * main - function prints all arguments it receives
 * @argc: the number of arguments passed to the program
 * @argv: the argument vector
 *
 * Return: 0 (success) and 1 (if error occurs)
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
