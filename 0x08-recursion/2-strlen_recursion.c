#include "main.h"
/**
 * _strlen_recursion - it will return the length of a string
 * @s: string pointer
 * Return: length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 +  _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}

