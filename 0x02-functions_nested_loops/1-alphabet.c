#include "main.h"

/**
  *print_alphabet - prints alphabet in lower case
  *
  *Return: Always 0 (success)
  */

void print_alphabet(void)
{
	char f;

	for (f = 97; f <= 122; f++)
	{
		_putchar(f);
	}
	_putchar('\n');
	return;

}
