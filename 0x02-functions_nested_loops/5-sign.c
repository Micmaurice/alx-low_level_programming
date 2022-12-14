#include "main.h"
/**
 * print_sign - sign of the number
 * @n: character to be checked
 * Return: return 1 prints + for positive nos
 * return -1 print - for negative nos
 * return 0 print 0 for zero
 */

int print_sign(int n)

{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

}

