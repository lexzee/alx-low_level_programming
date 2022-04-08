#include <stdio.h>
/**
* main - Print the numbers of base 16 in lowercase
*
* Return: Always 0 (Success)
*/
int main(void)
{
		char fig;
	
		for (fig=0; fig<=9; fig++)
		putchar(fig+'0');

		for (fig='a'; fig<='f'; fig++)
		putchar(fig);

		putchar('\n');
	
	return (0);
}
