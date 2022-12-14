#include "main.h"
/**
 * sqtRecursive - square root
 * @n: integer
 * @m: other integer
 * Return: 1
 */
int sqtRecursive(int n, int m)
{
	if (n <= 0)
	return (-1);
	if (n * n == m)
	return (n);
	return (sqtRecursive(n - 1, m));
}

	/**
	 * _sqrt_recursion - finds square root
	 * @n: integer
	 * Return: square root of n or -1
	 */

int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	return (sqtRecursive(n / 2, n));
}

	/**
	 * is_prime_number - checks for prime number
	 * @n: integer
	 * Return: 1 if else success else 0
	 */
	int is_prime_number(int n)
{
	if (n <= 1 || _sqrt_recursion(n) >= 1)
		return (0);
	if (_sqrt_recursion(n) == -1)
		return (1);
	return (_sqrt_recursion(n));
}
