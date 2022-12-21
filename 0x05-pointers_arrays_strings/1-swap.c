#include "main.h"

/**
 * swap_int - swaps the value of a and b
 * @a: first interger
 * @b: second integer
 * Return: Value of a and b
 */

void swap_int(int *a, int *b)
{
	int q;

	q = *a;
	*a = *b;
	*b = q;
}
