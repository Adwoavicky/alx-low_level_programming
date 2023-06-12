#include "main.h"

/**
* append_text_to_file - a function that appends a text at the end of a file
* @filename: file to be appeneded
* @text_content: a NULL terminated string
* Return: 1 on success and -1 if otherwise
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, h = 0;

	if (filename == NULL)

		return (-1);

	if (text_content != NULL)
	{
		for (h = 0; text_content[h];)
			h++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, h);

	if (o == -1 || w == -1)
		return (-1);

	close(o);
	return (1);
}
