#include "main.h"
/**
 * print_sign - checks for positivity or negativity of a number
 * @n: number to be checked for positivity
 *
 * Return: On success 1 || 0 || -1.
 *
 */
int print_sign(int n)
{
if (n > 0)
{
return (1);
}
else if (n == 0)
{
return (0);
}
else
{
return (-1);
}
}
