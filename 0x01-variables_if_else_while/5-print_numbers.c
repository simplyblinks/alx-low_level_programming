#include <stdio.h>

/**
  *main - A program that prints all single digit numbers of base 10 from 0
  *Return: 0 (success)
  */

int main(void)
{
	int a;

	for (a = 48; a <= 59; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}