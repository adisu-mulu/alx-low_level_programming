#include "main.h"
/**
 * get_endianness - function
 * Return: 0 if big 1 if little
 */
int get_endianness(void)
{
	int x;

	x = 1;
	if (*(char *)&x == 1)
		return (1);
	else
		return (0);
}
