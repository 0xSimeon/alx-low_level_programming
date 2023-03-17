#include <stdio.h>

/**
 * main - Entry point of program
 * Description: 'prints all single digit numbers of base 10 from 0
 * Return: Always 0 (Success)
 */

int main(void)
{
	int start_num = 0;

	while (start_num >= 0 && start_num < 10)
	{
		printf("%d", start_num);
		start_num++;
	}
	printf("\n");
	return (0);
}
