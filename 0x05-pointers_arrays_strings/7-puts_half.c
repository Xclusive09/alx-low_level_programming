#include "main.h"

/**
 * puts_half - print half of a string
 * @str: the string reference
 * Return: 0
 */

void puts_half(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
