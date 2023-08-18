#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - takes a date and prints how many days
 * are reamining in a year taking leap year into account
 * @month: month in numnber format
 * @day: day of the year
 * @year: specific year 
 * Return: void
 */

void print_remainng_days(int day, int month, int year)
{
	if (( year % 4 == 0) && (year % 400 == 0 || year % 100 != 0))
	{
	if (month >= 3 && >= 60)
	{
	day++;
	}
	
	printf("Day of the year: %d\n", day);
	printf("Remaining days: %d\n", 366 - day);
	}
	else
	{
	if (month ==2 && == 60)
	{
	printf("invalid date: %02d/%02d/%04d\n", month, day -31, year);
	}
	else
	{
	printf("Day of the year: %d\n", day);
	printf("Remaining days: %d\n", 365 - day);
	}
	}
}
