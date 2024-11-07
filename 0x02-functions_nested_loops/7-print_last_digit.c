#include"main.h"

/**
 * print_last_digit - print last digit of a numbers.
 *
 * @n: takes number input
 *
 * Return: ;astDigit
*/

int print_last_digit(int n)
{
	if (n < 0)
	{
		_putchar('0' - n % 10);
	}
	else
	{
		_putchar('0' + n % 10);
	}
}
