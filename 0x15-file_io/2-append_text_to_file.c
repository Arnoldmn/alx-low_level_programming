#include "main.h"
/**
 * append_text_to_file - it enables appending at the end of a file
 * @filename: file's name
 * @text_content: string content
 * Return: 1 else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int FD;
	ssize_t content, frwr;

	if (!filename)
		return (-1);

	FD = open(filename, O_WRONLY | O_APPEND);

	if (FD < 0)
		return (-1);

	if (text_content)
	{
		for (content = 0; text_content[content]; content++)
			;

		frwr = write(FD, text_content, content);

		if (frwr < 0)
			return (-1);
	}

	close(FD);

	return (1);
}
