#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Entry point
*
*Description -Write a program that prints the alphabet
*in lowercase, followed by a new line.
*
*Return: Always 0 (success)
*/
int main(void)
{
char c = 'a';
while (c <= 'z')
if ((c != 'q') || (c != 'e'))
putchar(c);
++c;
{
putchar('\n');
}
return (0);
}
