#include "main.h"
/**
 * create_file - creates a file
 * @text_content: content string to the file
 * @filename: name given to the file
 * Return: 1 if successful, -1 on error
 */
int create_file(const char *filename, char *text_content)
{
	int fd, fw, strng = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (strng = 0; text_content[strng];)
			strng++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	fw = write(fd, text_content, strng);

	if (fd < 0 || fw < 0)
		return (-1);

	close(fd);

	return (1);
}
