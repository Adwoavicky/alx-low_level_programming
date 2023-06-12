#include "main.h"
#include <stdlib.h>

/**
* read_textfile - a function that reads a text file and outputs it to POSIX
* @filename: text file to be read and outputted
* @letters: total number of letters
* Return: actual number of letters to be read and outputed
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *str;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	str = malloc(sizeof(char) * letters);
	if (str == NULL)
	{
		close(fd);
	return (0);
	}

	t = read(fd, str, letters);
	w = write(STDOUT_FILENO, str, t);

	free(str);
	close(fd);
	return (w);
}
