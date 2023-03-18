#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers.
 *
 * Description: The program prints all possible combinations of two two-digit
 * numbers between 00 and 99. The combinations are separated by comma and space
 * and are printed in ascending order. Each number is printed with two digits.
 * The program only uses the putchar function and a maximum of eight putchar
 * calls. The program also uses only integer variables and no char variables.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j;
	/* Loop over all possible pairs of two-digit numbers */
	for (i = 0; i < 100; i++)
	{
		for (j = i; j < 100; j++)
		{
			int tens1 = i / 10;
			int ones1 = i % 10;
			int tens2 = j / 10;
			int ones2 = j % 10;
			/* Print the first number with two digits */
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

