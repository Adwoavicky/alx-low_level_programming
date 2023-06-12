#include "main.h"
#include <stdlib.h>

/**
* read_textfile -reads a text file and outputs it out to POSIX
* @filename: name of file to be read
* @letters: number of letters to be read and outputted
* Return: actual number of letters
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *pF;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	pF = malloc(sizeof(char) * letters);
	if (pF == NULL)
	{
		close(fd);
	return (0);
	}

	t = read(fd, pF, letters);
	w = write(STDOUT_FILENO, pF, t);

	free(pF);
	close(fd);
	return (w);
}
