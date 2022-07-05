#include <stdio.h>

/**
 * main - Prints the sum of even-valued Fibonacci sequence
 * terms not exceeding 4000000.
 *
 * Return: Always 0.
 */
int main(void)
{
unsigned long num1 = 0, num2 = 1, fibonacci_sum;
float tot_sum;

while (1)
{
fibonacci_sum = num1 + num2;
if (fibonacci_sum > 4000000)
break;

if ((fibonacci_sum % 2) == 0)
tot_sum += fibonacci_sum;

num1 = num2;
num2 = fibonacci_sum;
}
printf("%.0f\n", tot_sum);

return (0);
}
