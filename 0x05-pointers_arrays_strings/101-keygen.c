#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random password for crackme
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int sum;
	char c;

	srand(time(NULL));
	while (sum <= 2645)
	{
		c = rand() % 128;
		sum += c;
		putchar(c);
	}
	putchar(2772 - sum);
	return (0);
}

