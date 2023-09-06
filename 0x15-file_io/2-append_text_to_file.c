#include "main.h"

/**
 * append_text_to_file - function appends text at the end of file
 * @filename: the name of the text file
 * @text_content: the content of the text file
 *
 * Return: 1 (success)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;
	size_t textlen;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	file = fopen(filename, "a");

	if (file == NULL)
		return (-1);
	textlen = strlen(text_content);

	if (fwrite(text_content, 1, textlen, file) != textlen)
	{
		fclose(file);
		return (-1);
	}
	fclose(file);
	return (1);
}
