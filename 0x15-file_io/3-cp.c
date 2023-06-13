#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
* create_buffer - assigns 1024 bytes to a buffer
* @file: the file that contains the bytes
*
* Return: a pointer to a newly-assigned buffer
*/

char *create_buffer(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buf);
}

/**
* close_file - a function that closes all file descriptors
* @fd: file descriptors to be closed
*/

void close_file(int fd)
{
	int b;

	b = close(fd);

	if (b == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
* main - copies the content of one file to another file
* @argc: total number of arguments to be passed
* @argv: an array of pointers
*
* Return: always succes
*
* Description: exit code 97 if argument count is incorrect
*              Exit code 98 - if file_from does not exist or cannot be read
*              Exit code 99 - if file_to cannot be created or written to
*              Exit code 100 - if file_to or file_from cannot be closed
*/

int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *pF;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	pF = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, pF, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read file %s\n", argv[1]);
			free(pF);
			exit(98);
		}

		w = write(to, pF, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(pF);
			exit(99);
		}

		r = read(from, pF, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(pF);
	close_file(from);
	close_file(to);

	return (0);
}
