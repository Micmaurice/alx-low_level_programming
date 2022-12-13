#include <stdio.h>
/**
 * main - print out different data type
 *
 * Return: 0
 */
int main(void)
{
	char z;
	int y;
	long int x;
	long long int w;
	float v;

	printf("Size of a char; %lu bytes\n", (unsigned long)sizeof(z));
	printf("Size of an int: %lu bytes\n" (unsigned long)sizeof(y));
	printf("Size of a long int: %lu bytes\n" (unsigned long)sizeof(x));
	printf("Size of a long long int %lu bytes\n" (unsigned long)sizeof(w));
	printf("Size of float %lu bytes \n" (unsigned long)sizeof(v));
	return (0);
}
