#include <stdio.h>

/**
 * main - print in base 16
 * @void: parameter to main
 * Return: 0 for success
 */

int main(void)
{
	int num = 48;

	while (num <= 57)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
