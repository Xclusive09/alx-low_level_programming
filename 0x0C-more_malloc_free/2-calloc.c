#include "main.h"
#include <stdlib.h>

/**
 * _calloc -  allocates memory for an array, using malloc
 * @nmemb: number of element
 * @size: byte size of each array element
 *
 * Return: if nmemb = 0, size = 0, function fails - NULL
 *      otherwise - a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ben;
	char *prog;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ben = malloc(size * nmemb);

	if (ben == NULL)
		return (NULL);

	prog = ben;

	for (index = 0; index < (size * nmemb); index++)
		prog[index] = '\0';

	return (ben);
}

