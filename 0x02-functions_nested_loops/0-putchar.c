#include <_putchar.c>
#include <_putchar.h>>
/**
*main - Entry point
*
*Description - This program prints _putchar followed by a new line
*
*Return: Always 0 (success)
*/
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
