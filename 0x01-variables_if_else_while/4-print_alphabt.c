#include <stdio.h>

/**
 * main - Entry point of program
 * Description: 'prints the alphabet in lowercase except q and e'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int alphabet = 97;

	while (alphabet <= 122)
	{
		if (alphabet == 101)
		{
			continue;
		}
		else if (alphabet == 113)
		{
			continue;
		}
		else
		{
			putchar(alphabet);
			alphabet++;
		}
	}

	putchar('\n');
	return (0);
}
