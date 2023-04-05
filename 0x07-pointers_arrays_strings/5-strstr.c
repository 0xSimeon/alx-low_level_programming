#include "main.h"
/**
 * _strstr -  locates a substring
 * @haystack: string to be evaluated with
 * @needle: string to check against haystack
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *point = needle;

		while (*h == *point && *point != '\0')
		{
			h++;
			point++;
		}

		if (*point == '\0')
			return (haystack);
	}

	return (0);
}
