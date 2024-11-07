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
	int zd = n % 10;

	if (n < 0)
		zd *= -1;
	else
		_putchar(zd + '0');
	return (zd);
}
