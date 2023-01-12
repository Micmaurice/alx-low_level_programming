#include "main.h"
/**
 * _islower - lower case checker
 * @c: parameter to be checked
 * Return: 1 if character is lower case else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
