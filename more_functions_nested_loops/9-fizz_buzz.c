#include<stdio.h>
/**
 * fizz_buzz.c - Program that prints the numbers from 1 to 100.
 * For multiples of 3, it prints "Fizz".
 * For multiples of 5, it prints "Buzz".
 * For multiples of both 3 and 5, it prints "FizzBuzz".
 * Each output is separated by a space.
 * The program ends with a newline character.
 */

int main(void)
{
int i;
	for (i = 1; i <= 100; i++)
	{
		if (i > 1)
			printf(" ");

		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else
			printf("%d", i);
	}
	printf("\n");
	return (0);
}
