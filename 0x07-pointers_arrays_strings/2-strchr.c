#include "main.h"

/**
 * _strchr - functions
 * @s: parameters
 * @c: parameters
 *
 * Return: c or else 0
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
	if (*s != c)
	{
	s++;
	}
	else
	{
	return (s);
	}
	}
	if (c == '\0')
	{
	return (s);
	}
	return (0);
}
