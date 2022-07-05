#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with
 * 1 and 2, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
int count;
unsigned long num1 = 0, num2 = 1, sum;
unsigned long num1_half1, num1_half2, num2_half1, num2_half2;
unsigned long half1, half2;

for (count = 0; count < 92; count++)
{
sum = num1 + num2;
printf("%lu, ", sum);

num1 = num2;
num2 = sum;
}

num1_half1 = num1 / 10000000000;
num2_half1 = num2 / 10000000000;
num1_half2 = num1 % 10000000000;
num2_half2 = num2 % 10000000000;

for (count = 93; count < 99; count++)
{
half1 = num1_half1 + num2_half1;
half2 = num1_half2 + num2_half2;
if (num1_half2 + num2_half2 > 9999999999)
{
half1 += 1;
half2 %= 10000000000;
}

printf("%lu%lu", half1, half2);
if (count != 98)
printf(", ");

num1_half1 = num2_half1;
num1_half2 = num2_half2;
num2_half1 = half1;
num2_half2 = half2;
}
printf("\n");
return (0);
}
