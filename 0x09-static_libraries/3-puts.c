#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string and a new line
 * @str: string
 * Return: ouputed string
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}