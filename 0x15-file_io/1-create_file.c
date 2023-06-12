#include "main.h"

/**
* create_file - makes a function that produces a file
* @filename: name of file to be produced
* @text_content: a NULL terminated string
* Return: 1 on success or -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int fd, w, g = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (g = 0; text_content[g];)
			g++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, g);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);
	return (1);
}
