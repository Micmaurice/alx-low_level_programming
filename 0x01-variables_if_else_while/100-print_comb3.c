#include <stdio.h>

/**
 * main - writes 0-99
 * @void: parameter for main
 * Return: 0 for success
 */

int main(void)
{
	int i, j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
		if ((i < j) & (j <= '9'))
		{
		putchar(i);
		putchar(j);
			if ((j < '9') | (i < '8'))
			{
				putchar(',');
				putchar(' ');
			}
		}
		}
	}
	putchar('\n');
	return (0);
}
