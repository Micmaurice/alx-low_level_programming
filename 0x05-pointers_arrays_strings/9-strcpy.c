#include"main.h"

/**
 * _strcpy - copy the pointed string to dest
 * @dest: destination
 * @src: character to check
 * Return: if successful, return 0
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for
	(a = 0; src[a] != '\0'; a++)

	dest[a] = src[a];
	dest[a] = '\0';
	return (dest);
}
