#include "main.h"

/**
  *jack_bauer - entry point
  *
  *Return: Void
  */

void jack_bauer(void)
{
	int l, p;

	for (l = 0; l < 24; l++)
	{
		for (p = 0; p < 60; p++)
		{
			_putchar((l / 10) + '0');
			_putchar((l % 10) + '0');
			_putchar(':');
			_putchar((p / 10) + '0');
			_putchar((p % 10) + '0');
			_putchar('\n');
		}
	}

}
