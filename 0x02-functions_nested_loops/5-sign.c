#include "main.h"
/**
*main - return 1 and print + if n is greater than 0, return 0 and print 0 if n is 0, return -1 and print - if n is less than 0
*
*Return : Always zero (success)
*/
int print_sign(int n)
{
	switch (n)
	{
		case (n > 0):
			_putchar(+);
			return (1);
		case (n == 0):
			_putchar(0);
			return (0);
		case (n < 0):
			_putchar(-);
			return (-1);
	}
}
