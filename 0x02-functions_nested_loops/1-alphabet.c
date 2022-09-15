#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
char letter = 'a';
while (letter <= 'z');
{
_putchar(letter);
letter++;
}
_putchar("\n");
}
