#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char d;

	for (d = 'z'; d >= 'a'; d--)
		putchar(d);
	putchar('\n');

	return (0);
}
