#include <stdio.h>

/**
 * main - Entry point of program
 * Description: 'prints all possible combinations of single digit numbers
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
		n++;
	}

	putchar('\n');
	return (0);
}
