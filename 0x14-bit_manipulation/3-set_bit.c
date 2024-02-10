#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * set_bit - sets the bit at specified index to 1
 * @index: the bit to be set
 * @n: pointer to the number
 * Return: 1 if it workd or -1 if there is an error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int i;
	int l;
	int bit;
	unsigned long int *bits;
	int num = *n;
	int length = 0;
	unsigned long int toInt = 0;

	if (num == 0)
		length = index + 1;
	else if (num == 1)
		length = index + 1;
	else
	{
		while (num > 0)
		{
		num = num >> 1;
		length++;
		}
	}
	bits = (unsigned long int *)malloc(length * sizeof(unsigned long int));
	index++;
	bit = length - index;

	for (i = 0; i < length; i++)
	{
		if (i == bit)
			bits[i] = 1;
		else
			bits[i] = 0;
	}
	for (l = 0; l < length; l++)
	{
		toInt = (toInt << 1) | bits[l];
	}
	free(bits);
	*n = *n | toInt;
	return (1);
}

