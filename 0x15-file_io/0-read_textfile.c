#include "main.h"

/**
 * read_textfile - function reads a text file & prints it to the POSIX stdout
 * @filename: name of the text file
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file_to_read;
	char *buffer;
	ssize_t bytes_read, bytes_written;

	if (filename == NULL)
		return (0);
	file_to_read = fopen(filename, "r");

	if (file_to_read == NULL)
		return (0);
	buffer = (char *)malloc(letters);

	if (buffer == NULL)
	{
		fclose(file_to_read);
		return (0);
	}
	bytes_read = fread(buffer, 1, letters, file_to_read);

	if (bytes_read == -1)
	{
		free(buffer);
		fclose(file_to_read);
		return (0);
	}
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	free(buffer);
	fclose(file_to_read);

	if (bytes_written == -1 || bytes_written != bytes_read)
		return (0);

	return (bytes_written);
}
