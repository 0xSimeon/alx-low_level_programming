#include <stdio.h>
/**
 * main - Entry point of program
 * Description: 'Prints all alphabets from a to z'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
