#include <stdio.h>

/**
  *main - prints the combinations of numbers
  *
  *Return: Always 0 (success)
  */

int main(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		putchar(a);
		if (a < 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);

}
