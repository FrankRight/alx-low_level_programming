#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 *
 * @a: pointer of array int
 * @n: the number of elements to swap
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = 0;
	int *start, *fin;
	int temp = 0;

	start = a;
	fin = a;
	n -= 1;
	while (i < n)
		i += 1;
	while (j <= i)
	{
		temp = *(start + j);
		*(start + j) = *(fin + i);
		*(fin + i) = temp;
		j++;
		i--;
	}
}
