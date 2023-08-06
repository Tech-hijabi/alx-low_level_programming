#include <stdio.h>
#include <stdlib.h>

/**
 * main - function prints minimum number of coins for change
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 (success) and 1 (if error occur)
 */
int main(int argc, char *argv[])
{
	int cent, change = 0;

	if (argc > 2 || argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	for (cent = atoi(argv[1]); cent > 0; cent--)
	{
		change++;
		if (cent >= 25)
		{
			cent -= 25;
		}
		if (cent >= 10)
		{
			cent -= 10;
		}
		if (cent >= 5)
		{
			cent -= 5;
		}
		if (cent >= 2)
		{
			cent -= 2;
		}
	}
	printf("%d\n", change);
	return (0);
}
