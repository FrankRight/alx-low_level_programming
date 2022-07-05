/*
* File: 100-times_table.c
* Author: FrankRight
*/

#include "main.h"

/**
 * print_times_table - Prints the times table of the input
 *
 * @n: The value of the times table to be printed.
 *
 * Return: return void
 */
void print_times_table(int n)
{
int number, multiply, res;

if (n >= 0 && n <= 15)
{
for (number = 0; number <= n; number++)
{
_putchar('0');

for (multiply = 1; multiply <= n; multiply++)
{
_putchar(',');
_putchar(' ');

res = number * multiply;

if (res <= 99)
_putchar(' ');
if (res <= 9)
_putchar(' ');

if (res >= 100)
{
_putchar((res / 100) + '0');
_putchar(((res / 10)) % 10 + '0');
}
else if (res <= 99 && res >= 10)
{
_putchar((res / 10) + '0');
}
_putchar((res % 10) + '0');
}
_putchar('\n');
}
}
}
