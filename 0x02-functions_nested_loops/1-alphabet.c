#include <stdio.h>
#include <stdlib.h>

/**
*Main - check code
*
*Return : Always 0.
*/

void print_alphabet(void)
{
	char i;
	
	for (i = 'a'; i <= 'z'; i++)
	putchar(i);
	putchar('\n');
}

int main()
{
	print_alphabet();
	return (0);
}
