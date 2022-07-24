#include <stdio.h>

/**
 * main - A program that prints all the arguments it receives
 * @argc: An argument count
 * @argv: An argument value
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}

	return (0);
}
