#include <stdio.h>

/**
 * main - This program prints all the numbers of base 16
 * in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int y;

	for (a = '0'; a <= '9'; a++)
		putchar(a);
	for (y = 97; y <= 102; y++)
		putchar((int)y);

	putchar('\n');

	return (0);
}
