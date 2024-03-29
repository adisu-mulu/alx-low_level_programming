#include "main.h"
/**
 * clear_bit - function used to set the bit to 0
 * @n: the decimal whose bit is to be set 0
 * @index: the index to be changed
 * Return: 1 if successful -1 if error
 */



int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long mask;
	unsigned long int l = sizeof(unsigned long int) * 8;

	if (index >= l)
	{
		return (-1);
	}
	mask = ~(1UL << index);
	*n = *n & mask;
	return (1);
}
