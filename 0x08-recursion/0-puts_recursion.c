#include "main.h"

/**
 * _puts_recursion - function like puts();
 * @s: input
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
}
else
{
_putchar(*s);
_puts_recursion(*s + 1);
}
}
