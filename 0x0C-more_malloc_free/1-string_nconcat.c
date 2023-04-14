#include <stdlib.h>
#include <main.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string to concat (append)
 * @s2: second string to concat
 * @n: number of bytes from s2 to s1
 *
 * Return: Pointer to allocated string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int k = 0, l = 0, length1 = 0, length2 = 0;

	while (s1 && s1[length1])
		length1++;
	while (s2 && s2[length2])
		length2++;

	if (n < length2)
		s = malloc(sizeof(char) * (length1 + n + 1));
	else
		s = malloc(sizeof(char) * (length1 + length2 + 1));

	if (!s)
		return (NULL);

	while (k < length1)
		s[k] = s1[k];
		k++;

	while (n < length2 && k < (length1 + n))
	{
		s[k++] = s2[l++];
	}

	while (n >= length2 && k < (length1 + length2))
		s[k++] = s2[l++];

	s[k] = "\0";

	return (s);
}
