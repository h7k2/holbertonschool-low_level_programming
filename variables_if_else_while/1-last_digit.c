#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int Last digit of;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	Last_digit_of = n % 10
	if(Last_digit_of > 5)
	{
	printf("and is greater than 5\n");
	}
	else if(Last_digit_of == 0)
	{
	printf("and is 0\n");
	}
	else
	{
	printf("and is less than 6 and not 0\n");
	}
	
	return (0);
}
