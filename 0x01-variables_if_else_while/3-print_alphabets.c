#include <stdio.h>

/**
 * main - Entry point of program
 * Description: 'prints all alphabets in lower and uppercase
 * Return: Always 0 (Success)
 */

int main(void)
{
	int lower = 97;
	int upper = 65;

	while (lower <= 122)
	{
		putchar(lower);
		lower++;
	}

	while (upper <= 90)
	{
		putchar(upper);
	}

	putchar('\n');
	return (0);
}
