#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n, mod_of_n;

srand(time(0));
n = rand() - RAND_MAX / 2;
mod_of_n = n % 10;
/* your code goes there */
printf("Last digit of %d is %d ", n, mod_of_n);
if (mod_of_n > 5)
{
printf("and is greater than 5\n");
}
else if (mod_of_n == 0)
{
printf("and is 0\n");
}
else
{
printf("and is less than 6 and not 0\n");
}
return (0);
}
