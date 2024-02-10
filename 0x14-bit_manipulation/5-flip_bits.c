#include "main.h"
/**
 * flip_bits - function to perform the flipping of the bits
 * @n: the first number
 * @m: the second number
 * Return: number of bits needed to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipXor = n ^ m;
	unsigned int counter = 0;

	while (flipXor)
	{
		counter = counter + flipXor & 1;
		flipXor >>= 1;
	}
	return (counter);

}
