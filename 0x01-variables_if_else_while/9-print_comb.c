#include <stdio.h>
/**
* main - Print all possible combinations of single digit numbers
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int fig;

	for (fig = 0; fig <= 9; fig++)
	{
		putchar(fig + '0');
		if (fig < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return(0);
}
