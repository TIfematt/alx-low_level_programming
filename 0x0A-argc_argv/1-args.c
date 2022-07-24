#include <stdio.h>

/**
 * main - This program prints the number of argument passed into it
 * followed by a new line
 *
 * @argc: argument count
 * @argv: argument vector/value
 * Return: 0
 */

int main(int argc, char **argv)
{
	if (argv[0])
		printf("%d\n", argc - 1);

	return (0);
}
