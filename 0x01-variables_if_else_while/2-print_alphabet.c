#include <stdio.h>

/**
 * main - Enty point
 *
 * Description: print add alphabet letters
 *
 * Return: A;ways 0 (Success
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
