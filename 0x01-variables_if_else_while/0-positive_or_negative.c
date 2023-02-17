#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main block
 * description: get a random number that prints number
 * return 0
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX /:;
	if ( n >0)
		printf("%i\ is positive /n", n);
	else if (n < 0)
		printf("%i\ is nagative /n", n);
	else
		printf("%i\ is zero /n" , n);
	return (0);
}










