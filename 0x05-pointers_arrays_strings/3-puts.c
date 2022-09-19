#include "main.h"

/**
 * _puts - priint a string and a new line
 * @str: string parameters
 *
 * Return: 0
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
