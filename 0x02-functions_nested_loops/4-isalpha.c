#include "main.h"

/**
*_isalpha - checks for alpha character
*@c: character to be checked
*Return: return 1 if a character else return 0
*/

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && <= 122))
	return (1);
	return (0);
}
