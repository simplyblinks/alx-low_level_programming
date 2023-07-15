#include <stdio.h>
/**
  *main - A program that prints the alphabet in lowercase
  *Return: Always 0 (success)
  */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z';)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
