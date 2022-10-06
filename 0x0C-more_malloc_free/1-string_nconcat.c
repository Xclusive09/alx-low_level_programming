#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenate two string
 *
 * @s1: first string
 * @s2: second string
 * @n: max number of bytes of @s2
 *
 * Return: NULL = if the function fails
 *          else - a pointer to the concatenated space in the memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int rod = n, index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		rod++;

	concat = malloc(sizeof(char) * (rod + 1));

	if (concat == NULL)
		return (NULL);

	rod = 0;

	for (index = 0; s1[index]; index++)
		concat[rod++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		concat[rod++] = s2[index];

	concat[rod] = '\0';

	return (concat);
}

