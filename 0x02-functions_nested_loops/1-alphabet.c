#include "main.h"
/**
*main - Entry point
*@print_alphabet(): prints alphsbets in lower case
*@int : integer
*@_putchar() : for printing
*@print_alphabet() : for printing alphabet
*Return: Always 0 (Succes)
*/
int _putchar(int);
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
void print_alphabet(void);
int main(void)
{
print_alphabet();
return (0);
}
