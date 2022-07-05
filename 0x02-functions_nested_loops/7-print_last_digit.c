#include "main.h"
/**
 * print_last_digit - prints the last number of a number
 * @n: The number to ret the last digit
 *
 * Return: On success 0
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_last_digit(int n)
{
int last_digit = abs(n) % 10;
_putchar(last_digit + '0');
return (last_digit);
}
