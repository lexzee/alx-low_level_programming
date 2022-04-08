#include <stdio.h>
/**
 * main - print alphabet in lower and uppercase
 *
 *
 * Return: (0) Success
 */
 int main(void)
 {
 	char c;

 	for (c='a'; c<='z'; c++)
 	{
 	if (c!='e' && c!='q')
 	putchar(c);
 	}
 	putchar('\n');

 	return (0);
 }
