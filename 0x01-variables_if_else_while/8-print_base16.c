#include <stdio.h>

/**
 * main - Entry point of program
 * Description: 'prints all numbers of base 16 in lowercase
 * Return: Always 0 (Success)
 */

int main(void)
{
	char hex1 = 48;
	char hex2 = 97;

	while (hex1 <= 57)
	{
		putchar(hex1);
		hex1++;
	}

	while (hex2 <= 102)
	{
		putchar(hex2);
		hex2++;
	}
	putchar('\n');
	return (0);
}
