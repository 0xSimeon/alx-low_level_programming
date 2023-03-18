#include <stdio.h>

/**
 * main - Entry point of program
 * Description: 'prints all signle digit number from 0
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
