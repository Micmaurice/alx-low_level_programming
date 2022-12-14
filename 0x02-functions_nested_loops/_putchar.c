#include "main.h"
#include <unistd.h>

/**
 * _putchar - output the character c
 * @c: to print
 * Return: on success 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));

}
