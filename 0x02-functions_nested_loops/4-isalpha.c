#include "main.h"

/**
  *_isalpha - entry point
  *@l: character to be checked
  *
  *Return: Always 0 (success)
  */

int _isalpha(int l)
{
	if (l >= 65 || l >= 97)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
