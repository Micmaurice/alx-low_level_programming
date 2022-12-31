#include <stdio.h>

/**
 * main - prints alphabets
 * @void: parameters for main
 * Return: 0 for success
 */

int main(void)
{
	char letter = 'z'

		while (letter >= 'a')
		{
			putchar(letter);
			letter--;
		}
	putchar('\n');
	return (0);
}
