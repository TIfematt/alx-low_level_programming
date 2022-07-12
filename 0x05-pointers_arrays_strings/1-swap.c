#include "main.h"
/**
 * swap_int - A function that swaps the values of two integers
 * @a: first intger
 * @b: second integer
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
