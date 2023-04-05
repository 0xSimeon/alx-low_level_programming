#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the char c to stdout, equivalent of putchar lib function
 * @c: argument passed to be printed
 * Return: Always the char
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
