#include "main.h"
#define SIZE 100
/**
 * get_bit - returns the bit on the specified index
 * @index: specifies the index to be returned
 * @n: the integer that is going to be converted to bits
 * Return: the bit at the specified index
 */


int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;
	int bits[SIZE];
	int bit;

	for (i = 0; i <= index; i++)
	{
		bits[i] = n % 2;
		n = n / 2;
	}
	bit = bits[index];
	if(1)
		return (bit);
	else
		return (-1);
}
