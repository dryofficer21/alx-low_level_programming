#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * multiply - multiplies numbers
 *
 * Return: multiplication
 */
int multiply(int num1, int num2)
{
	return (num1 * num2);
}

/**
 * isnumber - check tye number
 *
 * Return: 0
 */
int isNumber(const char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}

/**
 * main - void
 *
 * Return: void
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	char *num1_str = argv[1];
	char *num2_str = argv[2];

	if (!isNumber(num1_str) || !isNumber(num2_str))
	{
		printf("Error\n");
		return (98);
	}

	int num1 = atoi(num1_str);
	int num2 = atoi(num2_str);

	int result = multiply(num1, num2);

	printf("%d\n", result);

	return (0);
}
