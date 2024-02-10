#include "main.h"
/**
 * print_binary - converts the given number
 * @n: represents the number to be converted to binary
 */
void print_binary(unsigned long int n)
{
	int i;
	int bit;
	unsigned long int decimal = n;
	int required_bits = 0;

	if (n == 0)
		required_bits = 1;
	else if (n == 1)
		required_bits = 1;
	else
	{
		while (n > 0)
		{
			n = n >> 1;
			required_bits++;
		}
	}
	for (i = required_bits - 1; i >= 0; i--)
	{
		bit = decimal >> i;
		if (bit & 1)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}
} 

