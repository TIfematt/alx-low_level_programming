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
	int count;

	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
			printf("%s\n", argv[count]);
		}
	}

	return (0);
}
