#include "main.h"

/**
 * swap_int - swaps the value of the int a and int b
 * @a: firts int
 * @b: second int
 * Return: none
 */
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
