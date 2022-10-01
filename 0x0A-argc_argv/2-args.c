#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives.
 * @argc: Count arguments
 * @argv: arguements
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	/*Declaring var */
	int count = 0;

	if (argc > 0)
	{
		/*WHILE - print each arg*/
		while (count < argc)
		{
			printf("%s\n", argv[count]);
			count++;
		}
	}
	return (0);
}
