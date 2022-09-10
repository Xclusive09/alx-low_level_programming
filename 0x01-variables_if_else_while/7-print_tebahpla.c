#include <stdio.h>
/**
 * main -  prints the lowercase alphabet in reverse
 *
 * Return: Akways 0 (success)
 */
int main(void)
{
	int q;
for (q = 'z'; q >= 'a'; q--)
{
	putchar(q);
}
putchar('\n');
return (0);
}
