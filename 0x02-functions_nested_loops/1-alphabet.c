#include "main.h"
/**
*main - Entry point
*@n : integer
*@print_alphabet() : function
*Return: Always 0 (Success)
*/
void print_alphabet(void)
{
int n;
for (n = 'a'; n <= 'z'; n++)
{
_putchar(n);
}
_putchar('\n');
}
