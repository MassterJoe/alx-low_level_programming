#include "main.h"
/**
*main - Entry point
*print_alphabet -  prints alphsbets in lower case
*
*Return: Always 0 (Succes)
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
void print_alphabet(void);
int main(void)
{
print_alphabet();
return (0);
}
