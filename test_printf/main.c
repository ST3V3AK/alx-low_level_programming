#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * main - checks code
 *
 * Return: Always 0.
 */

int main(void)
{
	char msg[] = "I am just testing";
	char c = 'a';
	int num = 67;
	void *ptr;
	void *ptr2;

	ptr = &num;
	ptr2 = &c;
	print_string(msg);
	putchar('\n');
	putchar(num);
	putchar('\n');
	print_char(ptr);
	putchar('\n');
	printf("%c %c %c\n", 48, 49, 50);
	print_int(ptr2);
	putchar('\n');
	_printf("Test:\nInteger - %d\nString - %s\nCharacter - %c %c\n", num, msg, c, num);
	return (0);
}
