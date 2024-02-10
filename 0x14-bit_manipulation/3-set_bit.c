#include "main.h"
#include <stdlib.h>
/**
 * set_bit - sets the bit at specified index to 1
 * @index: the bit to be set
 * @n: pointer to the number
 * Return: modified numer
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int i;
	int l;
	int bit;
	int *bits;
	int num = *n;
	int length = 0;
	int toInt = 0;

	if (num == 0)
		length = 15;
	else if (num == 1)
		length = 15;
	else
	{
		while (num > 0)
		{
		num = num >> 1;
		length++;
		}
	}
	bits = (int *)malloc(length * sizeof(int));
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
	return (*n | toInt);
}

