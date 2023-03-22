#include "main.h"

/**
 * times_table - creates a multiplication table from 0 to 9
 * Return: always 0 (success)
 */
void times_table(void)
{
	int p, q, r;

	for (p = 0; p <= 9; p++)
	{
		for (q = 0; q <= 9; q++)
		{
			r = p * q;

			if ((r / 10) == 0)
			{
				if (q != 0)
				_putchar(' ');
				_putchar(r + '0');

				if (q == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');
				if (q == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
