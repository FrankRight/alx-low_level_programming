#include "main.h"
/**
 * _islower - checks for lower or upper case
 * @c: The character to check if uppercase
 *
 * Return: On success 1 || 0.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _islower(int c)
{
if (islower(c) > 0)
{
return (1);
}
else
{
return (0);
}
}
