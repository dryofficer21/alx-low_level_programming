#include "main.h"

/**
 * _isupper - uppercase letters
 * @c: character to check
 *
 * Return: 0 or 1
 */
int _isupper(int c)

{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);

}
