#include <stdio.h>

/**
  *main - A program that prints the alphabet in lowercase
  *It also print the alphabet in uppercase
  *Return: ALways 0 (sucess)
  */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	for (a = 'A'; a <= 'Z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
