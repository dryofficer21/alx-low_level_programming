#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: intiger
 *
 * Return: null
 */

void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (!i)
		exit(98);
	return (i);

}
