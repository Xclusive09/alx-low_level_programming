#include "main.h"

/**
 * clear_bit - sets the value of a bit to `0` at a given index
 * @n: number to be set
 * @index: starting point`0` of the bit to be setted
 *
 * Return: `1` if it worked
 * else `-1` if an error occur
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	set = ~(1 << index);
	*n = *n & set;
	return (-1);
}
