#include <stdio.h>
/**
 * main - function
 * Return: 0
 */
int main(void)
{
	int i, j, k;
	i = 0;

	while (i < 100)
	{
		j = i % 10; /* single digit */
		k = i % 10; /* doubles digit */

		if (k < j)
		{
			putchar(k + '0');
			putchar(j + '0');

			if (i < 89)
			{
				putchar(44);
				putchar(32);
			}
		}
		i++;
	}
	putchar('\n');
}
