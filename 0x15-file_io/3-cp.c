#include "main.h"
/**
 * get_argc - finds if argument count is correct
 * @argc: argument count
 * Return: void
 */
void get_argc(int argc)
{
	if (argc < 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * get_read - finds if file can be read
 * @get:traverses
 * @file: file_from
 * @FD_fm:descriptor
 * @FD_to: descriptor
 * Return: void
 */
void get_read(ssize_t get, char *file, int FD_fm, int FD_to)
{
	if (get == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		if (FD_fm != -1)
			close(FD_fm);
		if (FD_to != -1)
			close(FD_to);
		exit(98);
	}
}

/**
 * get_write - checks  if file can be written
 * @get: surveys the file
 * @file: file_to
 * @FD_fm: descriptor of file_from
 * @FD_to: descriptor of file_to
 * Return: void
 */
void get_write(ssize_t get, char *file, int FD_fm, int FD_to)
{
	if (get < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		if (FD_fm != -1)
			close(FD_fm);
		if (FD_to < -1)
			close(FD_to);
		exit(99);
	}
}

/**
 * get_close - finds if the file can be closed
 * @get: checks the file
 * @FD: descriptor of a file
 * Return: void
 */
void get_close(int get, int FD)
{
	if (get < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main -copies file content to another file
 * @argc: argument sum
 * @argv: vector of the argument
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int FD_fm, FD_to, close_to, close_fm;
	ssize_t strn_r, strn_w;
	char buffer[1024];
	mode_t file_prm;

	get_argc(argc);
	FD_fm = open(argv[1], O_RDONLY);
	get_read((ssize_t)FD_fm, argv[1], -1, -1);
	file_prm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	FD_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_perm);
	get_write((ssize_t)FD_to, argv[2], FD_fm, -1);
	strn_r = 1024;
	while (strn_r == 1024)
	{
		strn_r = read(FD_fm, buffer, 1024);
		get_read(strn_r, argv[1], FD_fm, FD_to);
		strn_w = write(FD_to, buffer, strn_r);
		if (strn_w != strn_r)
			strn_w = -1;
	 get_write(strn_w, argv[2], FD_fm, FD_to);
	}
	close_to = close(FD_to);
	close_fm = close(FD_fm);
	get_close(close_to, FD_to);
	get_close(close_from, FD_fm);
	return (0);
}
