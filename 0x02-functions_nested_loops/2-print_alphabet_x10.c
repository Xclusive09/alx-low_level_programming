#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Description: program yhay print 10x the alphabet a-z
 * Return: Void
 */
void print_alphabet_x10(void)
{
char h;
char p;
for (p = 0; p <= 9; p++)
{
for (h = 'a'; h <= 'z'; h++)
{
_putchar(h);
}
_putchar("\n");
}
}
