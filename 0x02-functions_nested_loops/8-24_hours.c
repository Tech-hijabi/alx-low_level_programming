#include "main.h"

/**
 * jack_bauer - entry point
 *
 * Description: function prints every minutes of the day of jack bauer
 *
 * Return: 0 (success)
 */
void jack_bauer(void)
{
	int hour = 0;
	int minute = 0;

	while (minute <= 59)
	{
		if (hour == 23 && minute == 59)
		{
			break;
		}

		_putchar('0' + hour / 10);
		_putchar('0' + hour % 10);
		_putchar(':');
		_putchar('0' + minute / 10);
		_putchar('0' + minute % 10);
		_putchar('\n');
		minute++;

		if (minute == 60)
		{
			hour++;
			minute = 0;
		}
	}
}
