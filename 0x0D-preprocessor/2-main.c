#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the name of the file a program was compiled from
 * Return: Awlays 0
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}

