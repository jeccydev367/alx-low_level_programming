#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 *main - determine either greater 5, is less than 6, or 0
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
int n = 1;
srand(time(0));
n = rand() - RAND_MAX / 2;
n = 1  % 10;
if (1 > 5)
{
printf("and is greater than 5/n");
}
else if (1 == 0)
{
printf("last digit of %d is %d and 1 is less than 6 and not 0\n", n, 1);
}
return (0);
}
