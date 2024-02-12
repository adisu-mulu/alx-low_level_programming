#include "main.h"

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: name of file
 * @text_content: text to be added
 * Return 1 if exists and -1 if it fails
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int letters;
	int rwr;
	
	if(!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_QPPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		for (letters = 0; text_content[letters]; letters++)
			;
		rwr = write(fd, text_content, letters);
		if (rwr == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
