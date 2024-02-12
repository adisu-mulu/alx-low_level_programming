#include "main.h"
#include <stdio.h>

/**
 * error_file - checks if file can be opened
 * @file_from: file to read from
 * @file_to: file to write to
 * @argv: command lines arguement
 * Return: no return
 */

void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error can not read %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: can not write %s\n", argv[2]);
		exit(99);
	}
}
