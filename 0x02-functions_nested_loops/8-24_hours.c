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
	int hour;
	int minute;

	hour = 0;

	while (hour < 24)
	{
		minute = 0;

		while (minute < 60)
		{
			_putchar('0' + hour / 10);
			_putchar('0' + hour % 10);
			_putchar(':');
			_putchar('0' + minute / 10);
			_putchar('0' + minute % 10);
			_putchar('\n');
			minute++;
		}
		hour++;
	}
}
