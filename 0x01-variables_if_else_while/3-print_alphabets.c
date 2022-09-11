#include<stdio.h>
/**
 *main - prints the alphabet.
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
char sl, cl;
for (sl = 'a'; sl <= 'z'; sl++)
putchar(sl);
for (cl = 'A'; cl <= 'z'; cl++)
putchar(cl);
return (0);
}
