#include "main.h"
/**
*main - Entry point
*
*Description - This program prints _putchar followed by a new line
*char : character type
*_putchar is a functon
*Return: Always 0 (success)
*/
char _putchar(x);
int main(void)
{
char *ch = "_putchar";
while (*ch)
{
_putchar(*ch);
ch++;
}
{
_putchar('\n');
}
return (0);
}
