#include "function_pointers.h"

/**
 * int_index - search for an int
 * @cmp: pointer to the function
 * @array: array of int
 * @size: size of array
 *
 * Return: index of first element that matches with `cmp` if none
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size < 1 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
