#include <stdio.h>
#include "main.h"		
/**
 * _putchar - writes the character c passed to stdout
 * @c:Ther character to print to stdout
 * Return: On success 1	
 */
		
int _putchar(char c)
{
	return (write(1, &c, 1));		
}
