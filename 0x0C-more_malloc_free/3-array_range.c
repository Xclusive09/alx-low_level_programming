#include "main.h"
#include <stdlib.h>

/**
 * array_range - create an array of integers (min - max)
 *
 * @min:first value of the array
 * @max: last value of the array
 *
 * Return: if min > max || the function fails - NULL
 *         else - a pointer to the array created
 */

int *array_range(int min, int max)
{
	int *array, index, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = min++;

	return (array);
}
