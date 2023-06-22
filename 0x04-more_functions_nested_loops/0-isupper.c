#include "main.h"

/**
 * _isupper - uppercase character
 *@c: character to check
 *
 * Return 1 if c uppercase, otherwise 0
 */
int _isupper(int c)

{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
