#include <stdio.h>
#include "main.h"

/**
 * main - A program that prints its name, followed
 * by a new line
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
