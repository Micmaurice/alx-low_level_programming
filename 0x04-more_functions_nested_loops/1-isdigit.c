#include "main.h"

/**
 * _isdigit - checks for number from 0 - 9
 * @c: character to check
 * Return: 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
