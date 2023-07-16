#include <stdio.h>
/**
  *main - A program that prints the alphabet in lowercase
  *Return: Always 0 (success)
  */

int main(void)
{
	int a;

	for (a = 122; a >= 97; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
