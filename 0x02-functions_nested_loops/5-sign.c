#include "main.h"

/**
  *print_sign - entry point
  *@z: character rested
  *
  *Return: Always 0 (success)
  */

int print_sign(int z)
{
	if (z > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (z == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

}
