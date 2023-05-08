#include "main.h"
/**
 * read_textfile - this function reads and prints the output of
 * the textfile
 * @filename: a pointer to the file to open read, and output
 * @letters: makes the characters existing in the file
 * Return: accumilation of letter characters, 0 when
 * file not opened, 0 if results are NULL, 0 when can't output
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t FD, txtr, txtw;
	char *buffer;

	if (filename == NULL)
		return (0);

	FD = open(filename, O_RDONLY);
	if (FD < 0)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(FD);
		return (0);
	}
	txtr = read(FD, buffer, letters);
	close(FD);
	if (txtr < 0)
	{
		free(buffer);
		return (0);
	}
	txtw = write(STDOUT_FILENO, buffer, txtr);
	free(buffer);
	if (txtr != txtw)
		return (0);
	return (txtw);
}
