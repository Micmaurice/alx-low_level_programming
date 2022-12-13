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

	printf("Size of a char; %lu bytes\n", sizeof(z));
	printf("Size of an int: %lu bytes\n" sizeof(y));
	printf("Size of a long int: %lu bytes\n" sizeof(x));
	printf("Size of a long long int %lu bytes\n" sizeof(w));
	printf("Size of float %lu bytes \n" sizeof(v));
	return (0);
}
