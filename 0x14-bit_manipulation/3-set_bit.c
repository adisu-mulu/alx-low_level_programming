#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * set_bit - sets the bit at specified index to 1
 * @index: the bit to be set
 * @n: the decimal whose bit will be set
 * Return: 1 if it workd or -1 if there is an error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;
	unsigned long int l = sizeof(unsigned long int) * 8;

	if (index >= l)
	{
		return (-1);
	}
	mask = 1UL << index;
	*n = *n | mask;
	return (1);
}

