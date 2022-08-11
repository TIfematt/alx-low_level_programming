#include <unistd.h>
/**
 * _putchar - Writes a character to standard output
 * @c: Charater to print
 * Return: 1 on success, -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
