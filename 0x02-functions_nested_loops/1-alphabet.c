#include "main.h"
/**
*main - Entry point
*print_alphabet -  prints alphsbets in lower case
*
*Return: Always 0 (Succes)
*/
int _putchar(int n);
void print_alphabet(void);
void print_alphabet(void)
{
int n;
for (n = 'a'; n <= 'z'; n++)
{
_putchar(n);
}
_putchar('\n');
}
print_alphabet();
int main(void)
{
print_alphabet();
return (0);
}
