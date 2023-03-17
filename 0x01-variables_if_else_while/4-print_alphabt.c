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
		if (alphabet == 101 || alphabet == 113)
		{
			alphabet++;
			continue;
		}
		putchar(alphabet);
		alphabet++;
	}

	putchar('\n');
	return (0);
}
