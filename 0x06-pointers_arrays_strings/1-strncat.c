#include "main.h"

/**
 * _strncat - concat two strings
 * @src: string to br append to dest
 * @dest: the string to be append to
 * @n: amount of bytes used from src
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int count = 0, count2 = 0;

	while (*(dest + count2) != '\0')
	{
		count++;
	}
	while (count2 < n)
	{
		*(dest + count) = *(src + count2);
		if (*(src + count2)  == '\0')
			break;
		count++;
		count2++;
	}
	return (dest);
}
