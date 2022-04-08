#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	char p;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (p='A'; p<='Z'; p++)
		putchar(p);

	putchar('\n');

	return (0);
}
