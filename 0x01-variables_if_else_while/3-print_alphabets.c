#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: Write a program that prints the alphabet in lowercase
 * Return: Always 0 (success)
 */
int main(void)
{
	char aph[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
		int i;
	for (i = 0; i < 52; i++)
	{
		putchar(aph[i]);
	}
	putchar('\n');
	return (0);
}
