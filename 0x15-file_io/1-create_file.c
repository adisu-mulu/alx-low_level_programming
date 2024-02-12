#include "main.h"

/**
 * create_file - creating a file
 * @filename: the name of file
 * @text_content: content to be written
 * Return: 1 if successful. -1 if it fails
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int letters;
	int rwr;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (letters = 0; text_content[letters]; letters++)
		;
	rwr = write(fd, text_content, letters);
	if (rwr == -1)
		return (-1);
	close(fd);
	return (1);
}
