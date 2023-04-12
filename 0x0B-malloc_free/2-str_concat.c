#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concatenation of s1 and s2 arguments
 */
char *str_concat(char *s1, char *s2)
{
	char *concatStr;
	int i, conti;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
		i = conti = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[ci] != '\0')
		conti++;
	concatStr = malloc(sizeof(char) * (i + conti + 1));

	if (concatStr == NULL)
		return (NULL);

	i = conti = 0;

	while (s1[i] != '\0')
		concatStr[i] = s1[i];
		i++;

	while (s2[concatStr] != '\0')
		concatStr[i] = s2[conti];
		i++, conti++;

	concatStr[i] = '\0';
	return (concatStr);
}
