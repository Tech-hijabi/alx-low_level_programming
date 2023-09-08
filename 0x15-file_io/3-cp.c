#include "main.h"

/**
 * error_exit -  function exits with an error upon failure
 * @exit_code: code number of the exit
 * @message: the message printed when error is encountered
 *
 * exit: exit_code
 */
void error_exit(int exit_code, const char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(exit_code);
}

/**
 * main - entry point
 *
 * Description: function copies the content of a file into another file
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	const char *file_from, *file_to;
	int from_f1, to_f2;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to");
	file_from = argv[1];
	file_to = argv[2];
	from_f1 = open(file_from, O_RDONLY);
	if (from_f1 == -1)
		error_exit(98, "Error: Can't read from file %s");
	to_f2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR
		| S_IRGRP | S_IWGRP | S_IROTH);
	if (to_f2 == -1)
	{
		close(from_f1);
		error_exit(99, "Error: Can't write to file %s");
	}
	while ((bytes_read = read(from_f1, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(to_f2, buffer, bytes_read);
		if (bytes_written == -1)
		{
			close(from_f1);
			close(to_f2);
			error_exit(99, "Error: Can't write to file %s");
		}
	}
	if (bytes_read == -1)
	{
		close(from_f1);
		close(to_f2);
		error_exit(98, "Error: Can't read from file %s");
	}
	if (close(from_f1) == -1)
		error_exit(100, "Error: Can't close fd");
	if (close(to_f2) == -1)
		error_exit(100, "Error: Can't close fd");
	return (0);
}
