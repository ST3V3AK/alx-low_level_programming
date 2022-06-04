#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * return - Always (0) success
 */
int main(void)
{
	int n;
	int last_digit;
	char msg = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n / 10;

	if (last_digit > 5)
		printf("%c %d is %d and is greater than 5\n", msg, n, last_digit);
	else if (last_digit == 0)
		printf("%c %d is %d and is zero\n", msg, n, last_digit);
	else if (last_digit < 6 && last_digit != 0)
		printf("%c %d is %d and is greater than 6 and not 0\n", msg, n, last_digit);
	return (0);
}
