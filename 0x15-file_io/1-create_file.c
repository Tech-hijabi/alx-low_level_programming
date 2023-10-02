#include "main.h"

/**
 * create_file - function creates a file
 * @filename: name of text file
 * @text_content: the content of the text
 *
 * Return: 1 (success)
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t textlen, bytes_written;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		textlen = strlen(text_content);
		bytes_written = write(file, text_content, textlen);

		if (bytes_written == -1 || bytes_written != textlen)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
