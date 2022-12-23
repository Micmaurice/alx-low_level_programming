#include <stdio.h>

/**                                                                             * _putchar - writes character in c
* @c: character
* Return: on success return 1
*/

int _putchar(char c)

{
	return (write(1, &c, 1));
}                               
