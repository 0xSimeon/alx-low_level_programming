#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers.
 *
 * Description: The program prints all possible combinations of two two-digit
 * numbers between 00 and 99. 
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j, tens1, ones1, tens2, ones2;
	/* @comment  Nested loop to get all possible pairs of two-digit numbers */
	for (i = 0; i < 100; i++)
	{
		for (j = i; j < 100; j++)
		{
			/* Get two different combinations */
			tens1 = i / 10;
			ones1 = i % 10;
			tens2 = j / 10;
			ones2 = j % 10;
			
			putchar(tens1 + '0');
			putchar(ones1 + '0');
			/* Print a space between the two numbers */
			putchar(' ');
			/* Print the second number with two digits */
			putchar(tens2 + '0');
			putchar(ones2 + '0');
			/* Print a comma and space after each combination, except the last */
			if (i != 99 || j != 99)
			{
				putchar(',');
			}
		}
	}
	putchar('\n');

	return (0);
}

