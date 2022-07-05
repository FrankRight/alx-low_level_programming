#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 * separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
int count;
unsigned long num1 = 0, num2 = 1, sum;

for (count = 0; count < 50; count++)
{
sum = num1 + num2;
printf("%lu", sum);

num1 = num2;
num2 = sum;

if (count == 49)
printf("\n");
else
printf(", ");
}

return (0);
}
