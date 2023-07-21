#include "main.h"

/**
 *_islower - check if the character is in lowercase
 *@l: represent the character
 *
 * Return: Always 0 (success)
 */
int _islower(int l)
{
	if (l >= 97 && l <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
