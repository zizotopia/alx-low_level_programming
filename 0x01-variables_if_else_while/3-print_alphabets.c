#include <stdio.h>

/**
 * main - Entery point
 *
 * Description: print alphabet on lowercase then in uppercase
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/*prints a - z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	/*print A - Z*/
	while (CH <= 'Z')
	{
		puchar(CH);
		CH++;
	}
	puchar('\n');

	return (0);
}
