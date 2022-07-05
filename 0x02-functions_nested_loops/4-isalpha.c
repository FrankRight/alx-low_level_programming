#include "main.h"
/**
 * _isalpha - checks for alphanumeric characters
 * @c: The character to check if alphanumeric
 *
 * Return: On success 1 || 0.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _isalpha(int c)
{
if (isalpha(c) > 0)
{
return (1);
}
else
{
return (0);
}
}
