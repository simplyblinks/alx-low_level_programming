#include "main.h"

/**
  *_abs - entry point
  *@x: integer value
  *
  *Return: Always 0
  */

int _abs(int x)
{
	if (x < 0)
	{
		x *= -1;
	}
	return (x);
}
