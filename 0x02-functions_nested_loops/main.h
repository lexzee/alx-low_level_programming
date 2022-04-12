#include <stdio.h>

/**
*main - self defined libary
*
*return : void
*/

/**
* funtion to print _putchar followed by anew line
*/

void _putchar(void)
{
	printf("_putchar\n");
}

/**
* function to print lowercase alphabet
*/

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	putchar(i);
	putchar('\n');
}

/**
* function to print lowercase alphabet 10 times
*/

void print_alphabet_x10(void)
{
	char letter;
	int line = 0;

	while (line < 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			putchar(letter);
		}

		putchar('\n');
		line++;
	}
}
