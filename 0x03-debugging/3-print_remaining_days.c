#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - prints days left in a year including leap years
 * @month: parameter for month
 * @day: parameter for day
 * @year: parameter for year
 * Return: void
 */

void print_remaining_days(int month, int day, int year)
{
	if ((year % 4 == 0) && (year % 100 == 0 || year % 400 != 0))
	{
	if (month >= 3 && day >= 60)
	{
	day++;
	}
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	}
	else
	{
	if (month == 2 && day >= 60)
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, y);
	}
	else
	{
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 365 - day);
	}
	}
}
