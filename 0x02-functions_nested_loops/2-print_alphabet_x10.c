#include <stdio.h>

/**
*main - prints alphabet 10x
*
*return: always 0.
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

int main()
{
	print_alphabet_x10();
	return (0);
}
