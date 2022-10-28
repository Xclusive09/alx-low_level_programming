#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to check bits in
 * @index: bit starting point (0)
 *
 * Return: if the value of the bit at index is truereturn `index`
 *  else `-1` if an error occur
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int division, check;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	division = 1 << index;
	check = n & division;
	if (check == division)
		return (1);
	return (0);
}
