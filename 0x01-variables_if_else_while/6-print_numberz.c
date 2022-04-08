#include <stdio.h>
/**
* main - Print all single digit numbers using only putchar
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int figure;

	for (figure = 0; figure < 10; figure++)
	putchar(figure + '0');

	putchar('\n');

	return (0);
}
