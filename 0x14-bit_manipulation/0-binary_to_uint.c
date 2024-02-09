#include "main.h"
/**
 * binary_to_uint - returns the converted to integer form of the binary
 * @b: the passed binary number
 * Return: sum (the converted integer form of the binary
 */

unsigned int binary_to_uint(const char *b)
{
	int count = 0;
	int sum = 0;
	int multiplier = 0;
	int product;
	int i;
	int mult;
	int to_digit;

	while (b[count] != '\0')
	{
		count++;
	}
	for (i = count - 1; i >= 0; i--)
	{
		if (multiplier == 0)
		{
			product = 1;
		}
		else
		{
			product = 1;
			for (mult = multiplier; mult > 0; mult--)
			{
				product = product * 2;
			}
		}
		to_digit = b[i] - '0';

		if ((to_digit != 0) & (to_digit != 1))
		{
			sum = 0;
			return (0);
		}
		else
		{
			to_digit = to_digit * product;
			sum = sum + to_digit;
			multiplier++;
		}
	}	
	return (sum);
}
