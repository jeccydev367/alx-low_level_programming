#include<stdio.h>
/**
 *main - prints decimal digits
 *followed by a new line
 *Return: Always 0 (Success)
 */
int main(void)
{
int n;
for (n = 0; n < 10; n++)
{
printf("%d", n);
}
putchar('\n');
return (0);
}
