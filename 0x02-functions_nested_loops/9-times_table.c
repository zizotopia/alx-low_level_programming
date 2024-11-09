#include "main.h"
/**
*times_table - prints the 9 times table
*
*Return: returns nothing
*/
void times_table(void)
{
	int z, d, x;

	for (z = 0; z <= 9; z++)
	{
		for (d = 0; d <= 9; d++)
		{
			x = z * d;
			if (x <= 9)
			{
				putchar(' ');
			}
			printf("%d", x);
			if (d <= 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar(10);
	}
}
