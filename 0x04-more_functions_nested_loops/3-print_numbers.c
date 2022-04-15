#include "main.h"
#include <stdio.h>
/**
* print_numbers - function that prints the numbers, from 0 to 9.
*/

void print_numbers(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
		_putchar(num);
		_putchar('\n');
}
