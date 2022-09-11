#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* betty style doc for main function goes there */
/**
 *main - Entry point
  * it checks the number assigned to n and prints the number and
 * prints out whether the number stored is positive or nega
tive
*Return: Always 0 (Success)
*/
int main(void)
{
	int n;
 srand(time(0));
 n = rand() - RAND_MAX / 2;
 if (n > 0)                                                 printf("%d is positive\n",  n);
 else if (n == 0)                                           printf("%d is zero\n",  n);
 else
 printf("%d is negative\n",  n);                            return (0);                                               }
