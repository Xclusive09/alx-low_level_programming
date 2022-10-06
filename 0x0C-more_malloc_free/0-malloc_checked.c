#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: number of bytes to be allocated
 *
 * Return: Pointer to the Allocated Memory
 */

void *malloc_checked(unsigned int b)
{
	void *vin = malloc(b);

	if (vin == NULL)
		exit(98);

	return (vin);
}
