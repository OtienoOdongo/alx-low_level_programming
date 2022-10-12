#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the name of the file a program was compiled from
 * Return: Awlays 0
 */
int main(void)
{
	printf("%s\n", _FILE_);
	return (0);
}

