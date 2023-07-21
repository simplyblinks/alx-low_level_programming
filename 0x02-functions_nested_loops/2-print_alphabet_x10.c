#include "main.h"

/**
  *print_alphabet_x10 - prints the value of alphabet ten times
  *
  *Return: Always void (success)
  */

void print_alphabet_x10(void)
{
	int n = 0;
	char x;

	while (n < 10)
	{
		n++;
		for (x = 97; x <= 122; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}
