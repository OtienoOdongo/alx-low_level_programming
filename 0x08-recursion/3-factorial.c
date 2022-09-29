#include "main.h"
/**
 * factorial - it will return a factorial of a given number
 * @n: factorial interger number
 *
 * Return: factorial of a given number
 * -1 if n < 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}




