#include "main.h"
/**
* _print_rev_recursion - prints a string
* @s: pointer block of memory to fill
* Return: Always 0.
*/
void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
