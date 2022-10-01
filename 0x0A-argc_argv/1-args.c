#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments
 * @argc: Count arguements
 * @argv: Arguements
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	(void) argv; /* Ignore argv */
	printf("%i\n", argc - 1);

	return (0);
}
