#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	for(int n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return 0;
}
