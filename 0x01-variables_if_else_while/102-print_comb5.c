#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a, b, i, j;
for (a = 0; a <= 9; ++a)
{
for (b = 0; b <= 9; ++b)
{
for (i = 0; i <= 9; ++i)
{
for (j = 0; j <= 9; ++j)
{
int num1 = a * 10 + b;
int num2 = i * 10 + j;
if (num1 < num2 && num1 != num2)
{
putchar((a) + '0');
putchar((b) + '0');
putchar(' ');
putchar((i) + '0');
putchar((j) + '0');
if (num1 == 98 && num2 == 99)
{
continue;
}
else
{
putchar(',');
putchar(' ');
}
}
}
}
}
}
putchar('\n');
return (0);
}
