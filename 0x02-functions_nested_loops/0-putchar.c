#include <stdio.h>
#include "main.h"
/**
*Main - program to print _putchar
*
*Return zero Always(success)
*/

int main(void)
{
	int i;
	char p[] = "_putchar";

	for (i = 0; i < 9; i++)
	{
		_putchar(p[i]);
	}
	_putchar('\n');
	return (0);
}
