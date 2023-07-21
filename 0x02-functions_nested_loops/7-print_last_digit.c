#include "main.h"

/**
  *print_last_digit - entry point
  *@m: character variable
  *Return: Always 0 (succeess)
  */

int print_last_digit(int m)
{
	if (m < 0)
	{
		m *= -1;
	}
	_putchar((m % 10) + '0');
	return (m % 10);
}
